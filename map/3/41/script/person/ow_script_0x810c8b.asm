.include "overworld_script.s"

.include "std.s"

.global ow_script_0x810c8b
ow_script_0x810c8b:
copyvarifnotzero 0x8000 0x18
copyvarifnotzero 0x8001 0x1
callstd ITEM_FIND
end