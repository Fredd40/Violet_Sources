.include "flags.s"
.include "items.s"
.include "callstds.s"
.include "vars.s"
.include "ordinals.s"
.include "overworld_script.s"


.global ow_script_0x931da8
ow_script_0x931da8:
checkflag KASKADA_BLACKMARKET_SCHATTENGLAS
gotoif EQUAL ow_script_0x931ddf
compare KARMA_VALUE 0x7fff
gotoif LESS_OR_EQUAL ow_script_0x931e91
lock
faceplayer
setflag KASKADA_BLACKMARKET_SCHATTENGLAS
loadpointer 0x0 str_0x931e57
callstd MSG_KEEPOPEN
copyvarifnotzero 0x8000 ITEM_SCHATTENGLAS
copyvarifnotzero 0x8001 1
callstd ITEM_OBTAIN
loadpointer 0x0 str_0x931e1e
callstd MSG_FACE
end


.global ow_script_0x931e91
ow_script_0x931e91:
loadpointer 0x0 str_0x931e9b
callstd MSG_FACE
end


.global ow_script_0x931ddf
ow_script_0x931ddf:
loadpointer 0x0 str_0x931de9
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x931e57

str_0x931e57:
    .string "Ah, ich sehe, dass du ein\ngerissenes kleines Balg bist."
        
        
.global str_0x931e1e

str_0x931e1e:
    .string "Mit diesen Gläsern siehst du die\nWelt angenehm dunkel."
        
        
.global str_0x931e9b

str_0x931e9b:
    .string "Nah, du bist viel zu freundlich\nfür einen Ort wie diesen, Kind."
        
        
.global str_0x931de9

str_0x931de9:
    .string "Ein düsterer Blick auf alles raubt\ndir Illusionen."
        
        
.elseif LANG_EN

.endif
