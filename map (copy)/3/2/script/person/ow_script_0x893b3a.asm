.include "overworld_script.s"

.include "std.s"

.global ow_script_0x893b3a
ow_script_0x893b3a:
loadpointer 0x0 str_0x8cb5ae
callstd MSG_FACE
end

.global str_0x8cb5ae

str_0x8cb5ae:
    .string "Was würde ich nur für einen\nRegenschirm geben..."
        
        