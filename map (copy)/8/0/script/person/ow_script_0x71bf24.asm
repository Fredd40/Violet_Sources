.include "overworld_script.s"

.include "std.s"

.global ow_script_0x71bf24
ow_script_0x71bf24:
loadpointer 0x0 str_0x71cdbe
callstd MSG_FACE
end

.global str_0x71cdbe

str_0x71cdbe:
    .string "An den Flüssen kann man\nunglaublich gut Staudämme bauen."
        
        