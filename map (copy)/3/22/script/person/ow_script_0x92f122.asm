.include "overworld_script.s"

.include "std.s"

.global ow_script_0x92f122
ow_script_0x92f122:
setflag TRANS_DISABLE
clearflag TRANS_PALETTE_FETCH
setvar 0x8004 0x3
special 0x19
waitstate
clearflag TRANS_DISABLE
loadpointer 0x0 str_0x92f13e
callstd MSG
end

.global str_0x92f13e

str_0x92f13e:
    .string "g"
        
        