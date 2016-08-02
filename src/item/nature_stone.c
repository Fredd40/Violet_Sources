#include "types.h"
#include "item.h"
#include "romfuncs.h"
#include "pokemon.h"
#include "callbacks.h"
#include "stdbool.h"

void item_field_nature_stone(u8 self){
    void **item_callback_after_poke_selection =(void**) 0x03005DE8;
    *item_callback_after_poke_selection = item_nature_stone;
    _item_select_pokemon_for_activation(self);
}

extern u8 *str_nature_stone_sucess_ref;

void item_nature_stone(u8 self, void (*failure_func)()){
    u8 *pokemenu_selected_pokemon_team_index = (u8*)0x0203B0A9;
    u16 *item_activated = (u16*)0x0203AD30;
    
    pid poke_pid = {get_pokemons_attribute(&player_pokemon[*pokemenu_selected_pokemon_team_index], ATTRIBUTE_PID, 0)};
    u8 current_nature = poke_pid.fields.nature;
    u32 current_positive = current_nature / 5;
    u32 current_negative = __umod(current_nature, 5);
    
    
    bool possible = false;
    
    u32 new_positive = 0xFF;
    u32 new_negative = 0xFF;
    switch(*item_activated){
        case ITEM_ANGR_ORB_P:
            new_positive = 0;
            break;
        case ITEM_ANGR_ORB_N:
            new_negative = 0;
            break;
        case ITEM_VERT_ORB_P:
            new_positive = 1;
            break;
        case ITEM_VERT_ORB_N:
            new_negative = 1;
            break;
        case ITEM_INIT_ORB_P:
            new_positive = 2;
            break;
        case ITEM_INIT_ORB_N:
            new_negative = 2;
            break;
        case ITEM_SPA_ORB_P:
            new_positive = 3;
            break;
        case ITEM_SPA_ORB_N:
            new_negative = 3;
            break;
        case ITEM_SPV_ORB_P:
            new_positive = 4;
            break;
        case ITEM_SPV_ORB_N:
            new_negative = 4;
            break;
    }
    
    //Now we check if the item can be used
    if (new_positive != 0xFF && new_positive != current_positive){
        possible = true;
        new_negative = current_negative;
    }
    if (new_negative != 0xFF && new_negative != current_negative){
        possible = true;
        new_positive = current_positive;
    }
    if(possible){
        sound(114);
        //Now we compute the new nature
        u8 new_nature = (u8)(new_positive * 5 + new_negative);
        player_pokemon[*pokemenu_selected_pokemon_team_index].pid.fields.nature = new_nature;
        //Todo remove item and return to bag
        item_remove(*item_activated, 1);
        u8 *buffer0 = (u8*)0x02021CD0;
        pokemon_load_name_as_string(&player_pokemon[*pokemenu_selected_pokemon_team_index], buffer0);
        u8 *strbuf = (u8*)0x02021D18;
        string_decrypt(strbuf, str_nature_stone_sucess_ref);
        pokemenu_init_textrenderer(strbuf, 1); //String @"Es wird keine Wirkung haben"
        bg_virutal_sync_reqeust_push(2);
        big_callbacks[self].function = failure_func;//0x8125711;
    }else{
        sound(5);
        pokemenu_init_textrenderer((u8*)0x08416824, 1); //String @"Es wird keine Wirkung haben"
        //pokemenu_init_textrenderer(str_nature_stone_sucess_ref, 1);
        bg_virutal_sync_reqeust_push(2);
        big_callbacks[self].function = failure_func;
    }
}