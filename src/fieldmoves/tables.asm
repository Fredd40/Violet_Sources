@// Tables pasted from the ROM

.global table_pokemenu_opts

.align 4
table_pokemenu_opts:
    .word pokemenu_opts

@Limit for field moves is 0xC which is currently located at 
pokemenu_opts:  @format : string, function pointer
    .word 0x84167cf
    .word 0x8122d85
    .word 0x84167c8
    .word 0x8122e39
    .word 0x8415f82
    .word 0x8123691
    .word 0x8415f97
    .word 0x81236f1
    .word 0x8415f70
    .word 0x8123755
    .word 0x8415fa3
    .word 0x8123c89
    .word 0x88cee80
    .word 0x96830b1
    .word 0x84167f2
    .word 0x8123e5d
    .word 0x84167f9
    .word 0x8123da9
    .word 0x8415f82
    .word 0x81240b5
    .word 0x84167b7
    .word 0x8124145
    .word 0x84167be
    .word 0x8124145
    .word 0x84167de
    .word 0x81241a5
    .word 0x84167e8
    .word 0x81242c9
    .word 0x8415faa
    .word 0x81243a5
    .word 0x841b8d7
    .word 0x81243d5
    .word 0x84167ff
    .word 0x81244e1
    .word 0x84167ff
    .word 0x81245f1
    .word 0x82476e8
    .word 0x81245f5
    .word 0x8247027
    .word 0x81245f5
    .word 0x824705b
    .word 0x81245f5
    .word 0x82472f2
    .word 0x81245f5
    .word 0x8247249
    .word 0x81245f5
    .word 0x8247c09
    .word 0x81245f5
    .word 0x82475d7
    .word 0x81245f5
    .word 0x8247478
    .word 0x81245f5
    .word 0x8247403
    .word 0x81245f5
    .word 0x82479f4
    .word 0x81245f5
    .word 0x824763f
    .word 0x81245f5
    .word 0x8247b12
    .word 0x81245f5

.global table_field_moves

.align 4
table_field_moves:
    .word field_moves

field_moves:
    .hword 0x94
    .hword 0xf
    .hword 0x13
    .hword 0x46
    .hword 0x39
    .hword 0xf9
    .hword 0x7f
    .hword 0x64
    .hword 0x5b
    .hword 0xd0
    .hword 0x87
    .hword 0xe6
    .hword 0xc