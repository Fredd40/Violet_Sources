.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8fed46
ow_script_0x8fed46:
loadpointer 0x0 str_0x8fffd9
callstd MSG_SIGN
end

.global str_0x8fffd9

str_0x8fffd9:
    .string "Haus des Namensexperten"
        
        