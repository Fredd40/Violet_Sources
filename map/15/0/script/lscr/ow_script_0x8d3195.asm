.include "callstds.s"
.include "flags.s"
.include "vars.s"
.include "ordinals.s"
.include "overworld_script.s"


.global ow_script_0x8d3195
ow_script_0x8d3195:
checkflag AKTANIA_FLASHBACK_DONE
gotoif EQUAL ow_script_0x8de677
goto ow_script_0x92eadc


.global ow_script_0x92eadc
ow_script_0x92eadc:
lockall
fadesong 0
call ow_script_0x8a1cc9
loadpointer 0x0 str_0x92ec17
callstd MSG
special 0x7
fadescreen 0x1
sound 0x64
checksound
callasm cmdx2D_force_pals_to_black
clearflag PKMNMENU
setvar STORY_PROGRESS 0x15
writebytetooffset 0x2 0x2036e28
warpmuted 0x3 0x49 0xff 0x23 0x24
end


.global ow_script_0x8de677
ow_script_0x8de677:
call ow_script_0x8a1cc9
loadpointer 0x0 str_0x92eb38
callstd MSG_FACE
special 0x7
addvar STORY_PROGRESS 0x2
releaseall
end


.ifdef LANG_GER
.global str_0x92ec17

str_0x92ec17:
    .string "Was ist das für ein seltsames\nGefühl? ... ... ...\p... ... ... ... ...\pIch fühle mich so schwindlig...\n... ... ... ... ...\pIch falle... falle..."
        
        
.global str_0x92eb38

str_0x92eb38:
    .string "Was bei Arceus war das? Was haben\ndiese Bilder zu bedeuten?\pSind diese Visionen Wirklichkeit,\nbin ich Zeuge der Zerstörung\lAktanias geworden?\pIch muss in Erfahrung bringen, was\nes damit auf sich hat!"
        
        
.elseif LANG_EN

.endif
