.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8c8426
ow_script_0x8c8426:
loadpointer 0x0 str_0x8c8430
callstd MSG
end

.global str_0x8c8430

str_0x8c8430:
    .string "Die Bezahlung für besagte Waren\nkann ich nur bar entgegennehmen..."
        
        