.include "std.s"

@// Wild data map_3_6_wild_water
.global map_3_6_wild_water
.align 4
map_3_6_wild_water:
.byte 0x1 @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_6_wild_water_entries

.align 4
map_3_6_wild_water_entries:
.byte 5, 10 @//Level range
.hword POKEMON_ENTON @// 60 percent percent
.byte 10, 20 @//Level range
.hword POKEMON_ENTON @// 30 percent percent
.byte 20, 30 @//Level range
.hword POKEMON_ENTON @// 5 percent percent
.byte 30, 40 @//Level range
.hword POKEMON_ENTON @// 4 percent percent
.byte 30, 40 @//Level range
.hword POKEMON_SMOGON @// 1 percent percent

@// Wild data map_3_6_wild_rod
.global map_3_6_wild_rod
.align 4
map_3_6_wild_rod:
.byte 0x1 @// Frequency in 1/256
.byte 0, 0, 0
.word map_3_6_wild_rod_entries

.align 4
map_3_6_wild_rod_entries:
.byte 5, 10 @//Level range
.hword POKEMON_ENTON @// 70 percent, rod percent
.byte 10, 20 @//Level range
.hword POKEMON_ENTON @// 30 percent, rod percent
.byte 20, 30 @//Level range
.hword POKEMON_ENTON @// 60 percent, profi rod percent
.byte 30, 40 @//Level range
.hword POKEMON_ENTON @// 20 percent, profi rod percent
.byte 30, 40 @//Level range
.hword POKEMON_SMOGON @// 20 percent, profi rod percent
.byte 1, 0 @//Level range
.hword POKEMON_POKEMON_0 @// 40 percent, super rod percent
.byte 68, 151 @//Level range
.hword 0x83c @// 40 percent, super rod percent
.byte 5, 5 @//Level range
.hword POKEMON_KARPADOR @// 15 percent, super rod percent
.byte 5, 5 @//Level range
.hword POKEMON_KARPADOR @// 4 percent, super rod percent
.byte 5, 15 @//Level range
.hword POKEMON_KARPADOR @// 1 percent, super rod percent

