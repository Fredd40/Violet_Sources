.include "overworld_script.s"

.include "std.s"

.global ow_script_0x845553
ow_script_0x845553:
loadpointer 0x0 str_0x84c5fb
callstd MSG_FACE
end

.global str_0x84c5fb

str_0x84c5fb:
    .string "Seit Wochen gehe ich Laufen, aber\nich nehme keinen Kilo ab! Ich\lsollte wirklich weniger Chips\lessen..."
        
        