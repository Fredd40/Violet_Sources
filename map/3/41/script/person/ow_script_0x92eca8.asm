.include "overworld_script.s"

.include "std.s"

.global ow_script_movs_0x8dea30
ow_script_movs_0x8dea30:
.byte 0x0
.byte STOP


.global ow_script_0x92eca8
ow_script_0x92eca8:
lock
faceplayer
call ow_script_0x8e63f4
loadpointer 0x0 str_0x8e225d
callstd MSG_YES_NO
compare LASTRESULT 0x0
gotoif EQUAL ow_script_0x947e76
playsong MUS_REVOLUTION 0x1
applymovement 0x800f ow_script_movs_0x8dea30
waitmovement 0x0
loadpointer 0x0 str_0x8e1e69
callstd MSG_KEEPOPEN
faceplayer
loadpointer 0x0 str_0x8de830
callstd MSG
special 0x7
fadescreen 0x1
hidesprite 0x800f
fadescreen 0x0
fadesong MUS_ROUTE_24_25
release
end


.global ow_script_0x947e76
ow_script_0x947e76:
loadpointer 0x0 str_0x9312b4
callstd MSG_FACE
special 0x7
end


.global ow_script_0x8e63f4
ow_script_0x8e63f4:
setvar 0x8000 0x0
setvar 0x8001 0x14
setvar 0x8002 0xe
special 0x6
return
