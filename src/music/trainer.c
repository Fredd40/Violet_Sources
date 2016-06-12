/* 
 * File:   trainer_encounter.c
 * Author: Domi
 *
 * Created on 9. Juni 2016, 11:49
 */

#include "types.h"
#include "trainer.h"
#include "music.h"
#include "battle.h"
#include "romfuncs.h"
#include "npc.h"

u16 get_encounter_music_by_trainer_id(u16 trainer_id){
    if (trainers[trainer_id].trainerclass == TRAINERCLASS_TEAM_VIOLET){
        return MUS_VIOLET_ENCOUNTER;
    }else if(trainers[trainer_id].trainerclass == TRAINERCLASS_REVOLUTIONARY){
        return MUS_REVOLUTIONARY_ENCOUNTER;
    }
    
    
    //Get encounter music by field inside trainer and modulo
    return (u16)( __umod(trainers[trainer_id].encounter_and_gender.encounter, 3) + 283 );
}

pair trainer_music_table [] = {
    {TRAINERCLASS_RIVAL, MUS_RIVAL_BATTLE},
    {TRAINERCLASS_TEAM_VIOLET, MUS_VIOLET_BATTLE},
    {TRAINERCLASS_GYMLEADER, MUS_GYMLEADER_BATTLE},
    {TRAINERCLASS_REVOLUTIONARY, MUS_REVOLUTIONARY_BATTLE},
    {0xFFFF, 0xFFFF}
};

u16 battle_get_music(){
    u16 battle_music = *vardecrypt(VAR_BATTLE_MUSIC);
    if (battle_music) return battle_music;
    if (battle_flags->trainer_battle){
        //scan a lo_table
        int i = 0;
        while(trainer_music_table[i].id != 0xFFFF){
            if(trainer_music_table[i].id == trainers[*trainer_id].trainerclass){
                return trainer_music_table[i].value;
            }
            i++;
        }
        return MUS_TRAINER_BATTLE;
    }
    if(battle_flags->flag_C || battle_flags->flag_D){
        return MUS_WILDBATTLE;
    }
    return NULL;
}