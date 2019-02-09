.include "callstds.s"
.include "overworld_script.s"
.include "vars.s"
.include "ordinals.s"

.global ow_script_trainerschool_maike
ow_script_trainerschool_maike:
compare TRAINERSCHOOL_PROGRESS 2
gotoif LESS before_test
call ow_script_0x89db71
loadpointer 0x0 str_after_test
callstd MSG_FACE
special 0x7
end

before_test:
call ow_script_0x89db71
loadpointer 0x0 str_before_test
callstd MSG_FACE
special 0x7
end

.ifdef LANG_GER

str_before_test:
    .autostring 35 2 "Oh MannDOTS\nIch bin so schlecht vorbereitetDOTS\pWie soll ich nur jemals diesen Test bestehen?"
        
str_after_test:
	.autostring 35 2 "SchniefDOTS\nSolche FragenDOTS\pKann doch niemand beantwortenDOTS"
        
.elseif LANG_EN

.endif
