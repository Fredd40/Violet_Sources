.include "overworld_script.s"

.include "std.s"

.global ow_script_0x87e8d9
ow_script_0x87e8d9:
showpokepic POKEMON_VOLTILAMM 0x8 0x3
loadpointer 0x0 str_0x895f45
callstd MSG_FACE
hidepokepic
end