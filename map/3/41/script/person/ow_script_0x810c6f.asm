.include "overworld_script.s"

.include "std.s"

.global ow_script_0x810c6f
ow_script_0x810c6f:
copyvarifnotzero 0x8000 0x22
copyvarifnotzero 0x8001 0x1
callstd ITEM_FIND
end
