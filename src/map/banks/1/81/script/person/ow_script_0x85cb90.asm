.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x85cb90
ow_script_0x85cb90:
trainerbattlestd 0x0 0xa5 0x0 str_0x947e42 str_0x9636ba
loadpointer 0x0 str_0x9636ba
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x947e42

str_0x947e42:
    .string "Diese HitzeDOTS willst du wirklich\nkämpfen? UrghDOTS"
        
        
.global str_0x9636ba

str_0x9636ba:
    .string "UrghDOTS Verschwinde einfachDOTS\nÄchzDOTS So heißDOTS"
        
        
.elseif LANG_EN

.endif
