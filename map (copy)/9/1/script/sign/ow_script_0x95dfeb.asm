.include "overworld_script.s"

.include "std.s"

.global ow_script_mart0x95e009
ow_script_mart0x95e009:
.hword ITEM_WIEDERBALL
.hword ITEM_NONE


.global ow_script_0x95dfeb
ow_script_0x95dfeb:
setflag TRANS_DISABLE
lock
faceplayer
preparemsg str_0x1a908b
waitmsg
pokemart3 ow_script_mart0x95e009
loadpointer 0x0 str_0x1a7e77
callstd MSG_KEEPOPEN
clearflag TRANS_DISABLE
release
end
