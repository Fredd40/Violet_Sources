.include "patches/mega.asm"
.include "patches/tm.asm"
.include "patches/transparency.asm"
.include "patches/tile.asm"
.include "patches/help_menu.asm"
.include "patches/flash.asm"
.include "patches/trainer.asm"
.include "patches/evolution.asm"
.include "patches/wild_poke.asm"
.include "patches/fp_menu.asm"
.include "patches/abilities_and_items.asm"
.include "patches/attack_split.asm"
.include "patches/dungeon.asm"
.include "patches/specials.asm"
.include "patches/karma.asm"
.include "patches/dns.asm"
.include "patches/music_code.asm"
.include "patches/gfx.asm"
.include "patches/fieldmoves.asm"
.include "patches/item.asm"
.include "patches/pokepad.asm"
.include "patches/pokemon.asm"

//Remove Help-System
.org 0x0813B90C
    mov r0, #0
    bx lr
