.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8a0ae8
ow_script_0x8a0ae8:
loadpointer 0x0 str_0x927e54
callstd MSG_FACE
end

.global str_0x927e54

str_0x927e54:
    .string "Argh! So viele von diesen\nverfluchten Revolutionären...\pAber der große Lord Faun wird\ndiesen rebellischen Verbrechern\leinen Denkzettel verpassen!"
        
        