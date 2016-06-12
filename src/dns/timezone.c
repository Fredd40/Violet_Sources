#include "types.h"
#include "romfuncs.h"
#include "rtc.h"
#include "map.h"
#include "color.h"
#include "save.h"
#include "dns.h"


void callback_switch_timezone(){
	update_timezone();
	set_callback1((void*)0x08056829); //return to normal map reload
	
}

void update_timezone(){
	
	return;
	
	rtc_timestamp stamp = {0, 0, 0, 0, 0, 0 ,0};
	rtc_read(&stamp);
	
	u8 bank = (*save1)->bank;
	u8 map = (*save1)->map;
	
	if (is_inside_map(bank, map)){
		*vardecrypt(VAR_TIMEZONE) = 0;
	}else{
		if (stamp.hour >= 22 || stamp.hour <= 6){
			*vardecrypt(VAR_TIMEZONE) = 1; //night
		}else if(stamp.hour <= 8){
			*vardecrypt(VAR_TIMEZONE) = 2; //morning
		}else if(stamp.hour >= 20){
			*vardecrypt(VAR_TIMEZONE) = 3; //evening
		}else{
			*vardecrypt(VAR_TIMEZONE) = 0;
		}
	}
}

bool is_inside_map(u8 bank, u8 map){
	
	mapheader *head = get_mapheader(bank, map);
	u8 type = head->type;
	return (type == 4) || (type == 8) || (type == 9);
}