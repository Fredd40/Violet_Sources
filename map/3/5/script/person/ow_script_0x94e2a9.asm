.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x94e2a9
ow_script_0x94e2a9:
loadpointer 0x0 str_0x94e2b3
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x94e2b3

str_0x94e2b3:
    .string "Hast du von Devin, der dunklen\nSeite der Top Vier gehört?\pEr ist ein unnahbares Phantom und\nman sagt ihm nach, auch in den\lRegierungsbezirken der anderen\lDrei kräft mitzumischen."
        
        
.elseif LANG_EN

.endif
