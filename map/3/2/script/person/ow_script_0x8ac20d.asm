.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8ac20d
ow_script_0x8ac20d:
loadpointer 0x0 str_0x8c105d
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x8c105d

str_0x8c105d:
    .string "Nick und Rick nutzen Vögel, um\nhierher zu gelangen. Ihre\lStaraptor\ sind so gut trainiert,\ldass sie selbst durch die\lGewitterstürme fliegen können."
        
        
.elseif LANG_EN

.endif
