.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8974f4
ow_script_0x8974f4:
loadpointer 0x0 str_0x8a2078
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x8a2078

str_0x8a2078:
    .string "Versteckte Maschienen ermöglichen\noft den Ort zu sonst\lunzugänglichen Arealen. Manchmal\lfindet man dort tolle Items."
        
        
.elseif LANG_EN

.endif
