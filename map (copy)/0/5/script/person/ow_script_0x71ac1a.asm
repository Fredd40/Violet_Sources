.include "overworld_script.s"

.include "std.s"

.global ow_script_0x71ac1a
ow_script_0x71ac1a:
trainerbattlestd 0x0 0x51 0x0 str_0x71ac32 str_0x71ac8d
loadpointer 0x0 str_0x71ac8d
callstd MSG_FACE
end

.global str_0x71ac32

str_0x71ac32:
    .string "Ich frage mich, wo der Ausgang\nist... Ich irre schon seit Stunden\ldurch diese Höhlen..."
        
        
.global str_0x71ac8d

str_0x71ac8d:
    .string "Die Dunkelheit ist mir bei der\nSuche nach dem Ausgang nicht sehr\lhilfreich."
        
        