.org 0x08069C8C
    ldr r0, =map_init_levelscript_4 | 1
    bx r0
    .pool

//@disable prescreens
.org 0x80F8378
    mov r0, #0x1C
    bx lr

//@dns at whiteout
.org 0x080566C4
    ldr r0, =whiteout_hook | 1
    bx r0
    .pool

//@remove previously on quest
.org 0x08111002
    mov r0, #0 //0 events to be loaded


//@Namespace

.org 0x80c0e64
	.word map_namespaces

.org 0x80c4f70
	.word map_namespaces


//**************TEST FOR SCRIPTS AND MAPS ! REMOVE!!! 
.org 0x081656C4
    .byte 0x5
    .word script_test

.org 0x080551B4
    .word mapfooters

.org 0x805526C
    .word mapbanks

//start position of player
.org 0x08054A20
    mov r0, #16
    str r0, [sp] //y
    mov r0, #4 //bank
    mov r1, #1 //map
    mov r3, #16 //x


//.org 0x08352218
//    .word map_3_0

//.org 0x0834EBE4
//    .word map_3_0_footer

//.org 0x082DD3F4
//    .word maptileset0
//    .word maptileset1