#include "types.h"
#include "romfuncs.h"
#include "basestats.h"
#include "pstring.h"
#include "present.h"
#include "utils.h"
#include "overworld.h"

extern u8 str_present_query[];

pstring_query_string pstring_query_string_present = {
    0,
    10,
    3,
    1,
    1,
    0,
    0,
    0,
    str_present_query
};
    
pstring_query_string *pstring_query_strings[] = {
    (pstring_query_string *) 0x083E195C,
    (pstring_query_string *) 0x083E1968,
    (pstring_query_string *) 0x083E1974,
    (pstring_query_string *) 0x083E1974,
    (pstring_query_string *) 0x083E1980,
    &pstring_query_string_present
};

void (*pstring_query_string_initializers[])() = {
    (void(*)())(0x809F584 | 1),
    (void(*)())(0x809F584 | 1),
    (void(*)())(0x809F5D8 | 1),
    (void(*)())(0x809F5D8 | 1),
    (void(*)())(0x809F584 | 1),
    // String initializer for present also is std print string initializer
    (void(*)())(0x809F584 | 1)
};

extern u8 ow_script_present_0[];

present_t presents[NUM_PRESENTS] = {
    {
        {0x62, 0xb7, 0xfb, 0xdf, 0xfa, 0x6a, 0x4e, 0x18},
        ow_script_present_0     
    }
};

u8 *present_get_matching_md(u8 *md){
    for(int i = 0; i < NUM_PRESENTS; i++){
        //dprintf("Checking present %d\n", i);
        bool matched = true;
        for(int j = 0; j < SHA3_MDLEN; j++){
            //dprintf("Input md: %d, Expected md: %d\n", md[j], presents[i].md[j]);
            if(presents[i].md[j] != md[j]){
                matched = false;
                break;
            }
        }
        if(matched)
            return presents[i].script;
    }
    return NULL;
}

void present_query_closure(){
    
    // The input is the inputed string extended by this arbitrary salt
    u8 input[SHA3_INLEN] = {
        224, 36, 30, 106, 254, 80, 213, 241, 25, 136, 35, 3, 132, 229, 10, 248, 
        166, 138, 11, 177, 77, 6, 255, 203, 229, 77, 4, 199, 170, 186, 33, 88 
    };
    strcpy(input, buffer0);
    u8 md[SHA3_MDLEN] = {0};
    sha3(input, md);
    
    
    u8 *script = present_get_matching_md(md);
    if(script){
        *ow_script_virtual_ptr = script;
        *vardecrypt(0x800D) = 1;
    }else{
        *vardecrypt(0x800D) = 0;
    }
    
    void (*std_closure_and_map_reload)() = (void(*)())(0x08056900 | 1);
    std_closure_and_map_reload();
}

void special_query_present_code(){
    memset(buffer0, 0xFF, 11);
    pokemon_query_string(5, buffer0, POKEMON_BOTOGEL, 0xFF, 0, present_query_closure);
}