.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8f46c0
ow_script_0x8f46c0:
loadpointer 0x0 str_0x8f46ca
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x8f46ca

str_0x8f46ca:
    .string "Trainerschule\nSchulleiter: Faun"
        
        
.elseif LANG_EN

.endif
