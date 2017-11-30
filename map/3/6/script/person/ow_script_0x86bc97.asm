.include "overworld_script.s"

.include "std.s"

.global ow_script_0x86bc97
ow_script_0x86bc97:
checkflag INFERIOR_EGG
gotoif EQUAL ow_script_0x86bcdf
lock
faceplayer
loadpointer 0x0 str_0x965895
callstd MSG_YES_NO
compare LASTRESULT 0x0
gotoif EQUAL ow_script_0x9638fb
countpokemon
compare LASTRESULT 0x6
gotoif HIGHER_OR_EQUAL ow_script_0x86f083
giveegg POKEMON_RABAUZ
fanfare 0x13e
loadpointer 0x0 str_0x86f069
callstd MSG_KEEPOPEN
waitfanfare
loadpointer 0x0 str_0x86efce
callstd MSG_KEEPOPEN
closeonkeypress
release
setflag INFERIOR_EGG
end


.global ow_script_0x86f083
ow_script_0x86f083:
loadpointer 0x0 str_0x963869
callstd MSG
release
end


.global ow_script_0x9638fb
ow_script_0x9638fb:
loadpointer 0x0 str_0x963906
callstd MSG
release
end


.global ow_script_0x86bcdf
ow_script_0x86bcdf:
loadpointer 0x0 str_0x86efce
callstd MSG_FACE
end