.include "items.s"
.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x86efad
ow_script_0x86efad:
copyvarifnotzero 0x8000 ITEM_LINKKABEL
copyvarifnotzero 0x8001 1
callstd ITEM_FIND
end
