.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8104f8
ow_script_0x8104f8:
loadpointer 0x0 str_0x8aaf9e
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x8aaf9e

str_0x8aaf9e:
    .string "Prof. Tanns Labor"
        
        
.elseif LANG_EN

.endif
