#include "types.h"
#include "basestats.h"

u8 pokemon_item_animations[POKEMON_CNT][5] = {
    	// POKEMON_POKEMON_0
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_BISASAM
	{0x14, 0x1b, 0x30, 0x15, 0x2a},
	// POKEMON_BISAKNOSP
	{0x1b, 0x20, 0x20, 0x1b, 0x33},
	// POKEMON_BISAFLOR
	{0x14, 0xf, 0x38, 0x13, 0x1e},
	// POKEMON_GLUMANDA
	{0xd, 0x11, 0x30, 0xf, 0x22},
	// POKEMON_GLUTEXO
	{0x1b, 0x7, 0x28, 0x1a, 0x19},
	// POKEMON_GLURAK
	{0x19, 0x13, 0x30, 0x1a, 0x22},
	// POKEMON_SCHIGGY
	{0x16, 0x13, 0x30, 0x17, 0x21},
	// POKEMON_SCHILLOK
	{0x12, 0x8, 0x28, 0x15, 0x19},
	// POKEMON_TURTOK
	{0x15, 0x14, 0x30, 0x13, 0x24},
	// POKEMON_DARTIRI
	{0x13, 0x1d, 0x30, 0x18, 0x2a},
	// POKEMON_DARTIGNIS
	{0x12, 0x1b, 0x8, 0x12, 0x2a},
	// POKEMON_FIARO
	{0x16, 0x1c, 0x30, 0x15, 0x2b},
	// POKEMON_HORNLIU
	{0x19, 0x13, 0x30, 0x1a, 0x24},
	// POKEMON_KOKUNA
	{0x19, 0x16, 0x8, 0x19, 0x25},
	// POKEMON_BIBOR
	{0x15, 0x12, 0x30, 0x12, 0x1e},
	// POKEMON_STARALILI
	{0x24, 0xe, 0x30, 0x1f, 0x1e},
	// POKEMON_STARAVIA
	{0xc, 0x13, 0x8, 0xa, 0x23},
	// POKEMON_STARAPTOR
	{0x17, 0x1e, 0x30, 0x18, 0x2d},
	// POKEMON_BRONZEL
	{0x12, 0x14, 0x30, 0x10, 0x26},
	// POKEMON_BRONZONG
	{0x15, 0x14, 0x30, 0x15, 0x1f},
	// POKEMON_MAEHIKEL
	{0xc, 0x27, 0x0, 0xb, 0x3f},
	// POKEMON_CHEVRUMM
	{0x11, 0xf, 0x30, 0x14, 0x1d},
	// POKEMON_PARAGONI
	{0x1b, 0x1, 0x28, 0x1d, 0x10},
	// POKEMON_TROMBORK
	{0x19, 0x13, 0x30, 0x1a, 0x1f},
	// POKEMON_PIKACHU
	{0x19, 0x14, 0x28, 0x1c, 0x22},
	// POKEMON_RAICHU
	{0x17, 0x16, 0x30, 0x18, 0x25},
	// POKEMON_SANDAN
	{0x11, 0x13, 0x28, 0x13, 0x22},
	// POKEMON_SANDAMER
	{0x16, 0x15, 0x30, 0x18, 0x21},
	// POKEMON_NIDORANW
	{0x1f, 0x17, 0x30, 0x1e, 0x28},
	// POKEMON_NIDORINA
	{0x10, 0xb, 0x28, 0x13, 0x1c},
	// POKEMON_NIDOQUEEN
	{0x15, 0x22, 0x28, 0x15, 0x31},
	// POKEMON_NIDORANM
	{0x13, 0x1e, 0x28, 0x1b, 0x2d},
	// POKEMON_NIDORINO
	{0x12, 0x15, 0x28, 0x13, 0x27},
	// POKEMON_NIDOKING
	{0x19, 0x14, 0x30, 0x1b, 0x24},
	// POKEMON_FLOETTE
	{0x1c, 0x12, 0x30, 0x1d, 0x21},
	// POKEMON_FLORGES
	{0x10, 0x16, 0x30, 0xe, 0x25},
	// POKEMON_VULPIX
	{0x28, 0x10, 0x28, 0x27, 0x1e},
	// POKEMON_VULNONA
	{0x1d, 0x15, 0x30, 0x1e, 0x25},
	// POKEMON_PUMMELUFF
	{0x1a, 0x12, 0x30, 0x1c, 0x22},
	// POKEMON_KNUDDELUFF
	{0x14, 0x1d, 0x8, 0x14, 0x29},
	// POKEMON_ZUBAT
	{0x23, 0x1a, 0x0, 0x21, 0x2e},
	// POKEMON_GOLBAT
	{0x1d, 0x20, 0x28, 0x1d, 0x2b},
	// POKEMON_MYRAPLA
	{0x1c, 0x18, 0x28, 0x1c, 0x27},
	// POKEMON_DUFLOR
	{0x1c, 0x1e, 0x28, 0x1d, 0x2a},
	// POKEMON_GIFLOR
	{0x1d, 0x1a, 0x30, 0x1c, 0x27},
	// POKEMON_FOLIPURBA
	{0x1e, 0x1c, 0x28, 0x20, 0x2e},
	// POKEMON_FEELINARA
	{0x1b, 0x16, 0x10, 0x1a, 0x29},
	// POKEMON_WATTZAPF
	{0x12, 0x19, 0x8, 0x16, 0x27},
	// POKEMON_VOLTULA
	{0x1e, 0x16, 0x30, 0x1c, 0x23},
	// POKEMON_DIGDA
	{0x1a, 0x11, 0x30, 0x1a, 0x1f},
	// POKEMON_DIGDRI
	{0x1c, 0x16, 0x30, 0x1c, 0x23},
	// POKEMON_KASTADUR
	{0x13, 0x13, 0x30, 0x13, 0x21},
	// POKEMON_TENTANTEL
	{0x1c, 0x13, 0x30, 0x17, 0x29},
	// POKEMON_ENTON
	{0x17, 0x12, 0x28, 0x17, 0x22},
	// POKEMON_ENTORON
	{0x1c, 0x15, 0x30, 0x1b, 0x23},
	// POKEMON_MENKI
	{0x1e, 0x16, 0x30, 0x1a, 0x27},
	// POKEMON_RASAFF
	{0x14, 0x17, 0x30, 0x14, 0x24},
	// POKEMON_FUKANO
	{0xf, 0x9, 0x28, 0xc, 0x19},
	// POKEMON_ARKANI
	{0x15, 0x14, 0x30, 0x13, 0x1f},
	// POKEMON_GRAMOKLES
	{0x1f, 0x10, 0x30, 0x1e, 0x17},
	// POKEMON_DUOKLES
	{0x22, 0xc, 0x30, 0x21, 0x18},
	// POKEMON_DURENGARD
	{0x1f, 0x13, 0x30, 0x1f, 0x21},
	// POKEMON_ABRA
	{0x1b, 0x12, 0x30, 0x1c, 0x25},
	// POKEMON_KADABRA
	{0x1c, 0x11, 0x28, 0x1d, 0x26},
	// POKEMON_SIMSALA
	{0x1b, 0x11, 0x30, 0x1b, 0x1e},
	// POKEMON_MACHOLLO
	{0x1d, 0x11, 0x30, 0x1d, 0x1f},
	// POKEMON_MASCHOCK
	{0x1a, 0xd, 0x28, 0x1c, 0x1b},
	// POKEMON_MACHOMEI
	{0x15, 0xe, 0x30, 0xe, 0x1c},
	// POKEMON_KNOFENSA
	{0x1a, 0x1c, 0x10, 0x15, 0x32},
	// POKEMON_ULTRIGARIA
	{0x1e, 0xf, 0x30, 0x1c, 0x1b},
	// POKEMON_SARZENIA
	{0x1a, 0x15, 0x30, 0x1e, 0x26},
	// POKEMON_TENTACHA
	{0x1b, 0x10, 0x28, 0x1c, 0x26},
	// POKEMON_TENTOXA
	{0x1c, 0x20, 0x28, 0x1d, 0x2d},
	// POKEMON_KLEINSTEIN
	{0x1d, 0x19, 0x28, 0x1e, 0x26},
	// POKEMON_GEOROK
	{0x19, 0x1b, 0x28, 0x1c, 0x27},
	// POKEMON_GEOWAZ
	{0xf, 0x11, 0x30, 0xe, 0x23},
	// POKEMON_PONITA
	{0x2f, 0xf, 0x28, 0x2b, 0x1e},
	// POKEMON_GALLOPA
	{0x14, 0x1f, 0x28, 0x15, 0x2f},
	// POKEMON_FLEGMON
	{0xe, 0xd, 0x28, 0xc, 0x1f},
	// POKEMON_LAHMUS
	{0x20, 0x1b, 0x10, 0x1f, 0x29},
	// POKEMON_MAGNETILO
	{0x1f, 0x14, 0x8, 0x1f, 0x22},
	// POKEMON_MAGNETON
	{0x16, 0x14, 0x30, 0x16, 0x29},
	// POKEMON_PORENTA
	{0x11, 0x16, 0x30, 0xd, 0x2c},
	// POKEMON_DODU
	{0x1d, 0x4, 0x28, 0xe, 0x7},
	// POKEMON_DODRI
	{0x1b, 0x24, 0x20, 0x17, 0x35},
	// POKEMON_JURBO
	{0x12, 0xa, 0x30, 0xe, 0x1a},
	// POKEMON_JUGONG
	{0x1f, 0x10, 0x30, 0x1d, 0x25},
	// POKEMON_SLEIMA
	{0x17, 0xf, 0x30, 0x19, 0x22},
	// POKEMON_SLEIMOK
	{0x1a, 0x18, 0x30, 0x17, 0x29},
	// POKEMON_MUSCHAS
	{0x19, 0x1e, 0x28, 0x1d, 0x2c},
	// POKEMON_AUSTOS
	{0x1a, 0x1f, 0x8, 0x19, 0x30},
	// POKEMON_NEBULAK
	{0x20, 0x14, 0x8, 0x1d, 0x26},
	// POKEMON_ALPOLLO
	{0x1a, 0x16, 0x30, 0x19, 0x28},
	// POKEMON_GENGAR
	{0x1f, 0x24, 0x20, 0x28, 0x36},
	// POKEMON_ONIX
	{0x1a, 0xe, 0x30, 0x1a, 0x1e},
	// POKEMON_TRAUMATO
	{0x1c, 0x12, 0x30, 0x19, 0x24},
	// POKEMON_HYPNO
	{0x1d, 0x1d, 0x30, 0x1a, 0x2b},
	// POKEMON_KRABBY
	{0x1e, 0x1f, 0x28, 0x1c, 0x30},
	// POKEMON_KINGLER
	{0x1c, 0x1b, 0x30, 0x1b, 0x2b},
	// POKEMON_VOLTOBAL
	{0x1c, 0x18, 0x30, 0x1d, 0x2e},
	// POKEMON_LEKTROBAL
	{0x21, 0x17, 0x30, 0x20, 0x24},
	// POKEMON_OWEI
	{0x1c, 0x17, 0x28, 0x1b, 0x25},
	// POKEMON_KOKOWEI
	{0x1b, 0x12, 0x30, 0x1b, 0x22},
	// POKEMON_TRAGOSSO
	{0x14, 0xf, 0x30, 0x11, 0x23},
	// POKEMON_KNOGGA
	{0x2e, 0x11, 0x30, 0x28, 0x22},
	// POKEMON_KICKLEE
	{0x22, 0xe, 0x30, 0x1e, 0x1d},
	// POKEMON_NOCKCHAN
	{0x14, 0x11, 0x30, 0x14, 0x24},
	// POKEMON_SCHLURP
	{0x1e, 0x14, 0x10, 0x1d, 0x20},
	// POKEMON_SMOGON
	{0x11, 0xd, 0x10, 0xf, 0x1c},
	// POKEMON_SMOGMOG
	{0xe, 0x23, 0x20, 0x14, 0x33},
	// POKEMON_RIHORN
	{0xd, 0x12, 0x28, 0x17, 0x22},
	// POKEMON_RIZEROS
	{0x1a, 0xd, 0x30, 0x1a, 0x1a},
	// POKEMON_CHANEIRA
	{0x1c, 0x18, 0x30, 0x1d, 0x29},
	// POKEMON_ZOBIRIS
	{0x1b, 0x6, 0x28, 0x1c, 0x14},
	// POKEMON_KANGAMA
	{0x1c, 0x14, 0x30, 0x16, 0x23},
	// POKEMON_SEEPER
	{0x10, 0x17, 0x30, 0x9, 0x2a},
	// POKEMON_SEEMON
	{0x16, 0x23, 0x20, 0x15, 0x34},
	// POKEMON_QUABBEL
	{0x16, 0xf, 0x30, 0x10, 0x18},
	// POKEMON_APOQUALLYP
	{0x1c, 0x18, 0x30, 0x1a, 0x26},
	// POKEMON_STERNDU
	{0x1d, 0x13, 0x30, 0x1b, 0x20},
	// POKEMON_STARMIE
	{0x24, 0x11, 0x30, 0x25, 0x1e},
	// POKEMON_TRAUNFUGIL
	{0x10, 0x19, 0x28, 0x12, 0x27},
	// POKEMON_SICHLOR
	{0x1b, 0xf, 0x30, 0x19, 0x1c},
	// POKEMON_GALAGLADI
	{0x14, 0x11, 0x30, 0x17, 0x20},
	// POKEMON_ELEKTEK
	{0x10, 0xe, 0x30, 0xb, 0x19},
	// POKEMON_MAGMAR
	{0x1d, 0x1c, 0x28, 0x20, 0x2b},
	// POKEMON_PINSIR
	{0x11, 0x1d, 0x28, 0x13, 0x2e},
	// POKEMON_TAUROS
	{0x16, 0x15, 0x30, 0x13, 0x23},
	// POKEMON_KARPADOR
	{0xb, 0x18, 0x28, 0x16, 0x29},
	// POKEMON_GARADOS
	{0x16, 0x8, 0x28, 0x15, 0x16},
	// POKEMON_LAPRAS
	{0x24, 0x12, 0x30, 0x1f, 0x20},
	// POKEMON_DITTO
	{0x16, 0x16, 0x30, 0x16, 0x23},
	// POKEMON_EVOLI
	{0x18, 0x23, 0x28, 0x18, 0x30},
	// POKEMON_AQUANA
	{0x14, 0x1b, 0x30, 0x16, 0x28},
	// POKEMON_BLITZA
	{0x16, 0x17, 0x30, 0x14, 0x25},
	// POKEMON_FLAMARA
	{0x18, 0x12, 0x30, 0x10, 0x23},
	// POKEMON_PORYGON
	{0x1d, 0x1d, 0x30, 0x1c, 0x2b},
	// POKEMON_AMONITAS
	{0x16, 0x1a, 0x30, 0x19, 0x2d},
	// POKEMON_AMOROSO
	{0x1b, 0x16, 0x30, 0x1a, 0x27},
	// POKEMON_KABUTO
	{0x15, 0x11, 0x30, 0x15, 0x1f},
	// POKEMON_KABUTOPS
	{0x13, 0x1d, 0x0, 0x14, 0x30},
	// POKEMON_AERODACTYL
	{0x35, 0x9, 0x30, 0x2e, 0x14},
	// POKEMON_RELAXO
	{0x18, 0xb, 0x18, 0x17, 0x17},
	// POKEMON_ARKTOS
	{0xe, 0xe, 0x10, 0x4, 0x28},
	// POKEMON_ZAPDOS
	{0xb, 0x2a, 0x8, 0xb, 0x38},
	// POKEMON_LAVADOS
	{0xd, 0x12, 0x30, 0xb, 0x21},
	// POKEMON_DRATINI
	{0x18, 0xe, 0x30, 0x13, 0x1c},
	// POKEMON_DRAGONIR
	{0x1b, 0x7, 0x18, 0x19, 0x17},
	// POKEMON_DRAGORAN
	{0x2b, 0x9, 0x28, 0x2c, 0x18},
	// POKEMON_MEWTU
	{0x19, 0x14, 0x10, 0x1f, 0x21},
	// POKEMON_MEW
	{0x1b, 0x17, 0x30, 0x1b, 0x24},
	// POKEMON_ENDIVIE
	{0x1d, 0x10, 0x30, 0x20, 0x1d},
	// POKEMON_LORBLATT
	{0x5, 0xd, 0x28, 0xd, 0x1b},
	// POKEMON_MEGANIE
	{0x11, 0x1b, 0x30, 0x14, 0x27},
	// POKEMON_FEURIGEL
	{0x25, 0x18, 0x30, 0x27, 0x26},
	// POKEMON_IGELAVAR
	{0x9, 0x10, 0x28, 0x10, 0x1c},
	// POKEMON_TORNUPTO
	{0x16, 0x10, 0x30, 0x19, 0x20},
	// POKEMON_KARNIMANI
	{0x16, 0x10, 0x30, 0x18, 0x21},
	// POKEMON_TYRACROC
	{0xe, 0xa, 0x28, 0x8, 0x1a},
	// POKEMON_IMPERGATOR
	{0x1e, 0xa, 0x30, 0x1d, 0x15},
	// POKEMON_IGNIVOR
	{0x21, 0xe, 0x30, 0x21, 0x19},
	// POKEMON_RAMOTH
	{0x1d, 0x15, 0x30, 0x1c, 0x24},
	// POKEMON_GLAZIOLA
	{0x19, 0xe, 0x30, 0x18, 0x1c},
	// POKEMON_RESLADERO
	{0x1b, 0x15, 0x30, 0x1c, 0x24},
	// POKEMON_LEDYBA
	{0x18, 0x12, 0x10, 0x1c, 0x21},
	// POKEMON_LEDIAN
	{0x20, 0x20, 0x28, 0x20, 0x2d},
	// POKEMON_WEBARAK
	{0x17, 0x23, 0x28, 0x15, 0x30},
	// POKEMON_ARIADOS
	{0x22, 0x1e, 0x8, 0x23, 0x2b},
	// POKEMON_IKSBAT
	{0x1f, 0x1d, 0x30, 0x1f, 0x29},
	// POKEMON_LAMPI
	{0x10, 0x23, 0x28, 0x19, 0x33},
	// POKEMON_LANTURN
	{0x1e, 0x17, 0x30, 0x1e, 0x24},
	// POKEMON_MAGNEZONE
	{0x1c, 0x18, 0x30, 0x1e, 0x26},
	// POKEMON_TOGEKISS
	{0x1f, 0x19, 0x30, 0x1f, 0x24},
	// POKEMON_FLABEBE
	{0x21, 0x15, 0x30, 0x1f, 0x20},
	// POKEMON_TOGEPI
	{0x1b, 0x10, 0x30, 0x1c, 0x1c},
	// POKEMON_TOGETIC
	{0x1c, 0x17, 0x30, 0x15, 0x21},
	// POKEMON_NATU
	{0x1b, 0x8, 0x30, 0x19, 0x14},
	// POKEMON_XATU
	{0x16, 0x15, 0x30, 0x15, 0x24},
	// POKEMON_VOLTILAMM
	{0x19, 0x12, 0x30, 0x18, 0x21},
	// POKEMON_WAATY
	{0xf, 0xa, 0x30, 0x10, 0x1b},
	// POKEMON_AMPHAROS
	{0x1f, 0x13, 0x30, 0x1f, 0x20},
	// POKEMON_BLUBELLA
	{0x1d, 0x15, 0x30, 0x1d, 0x22},
	// POKEMON_MARILL
	{0x1a, 0x12, 0x30, 0x17, 0x1f},
	// POKEMON_AZUMARILL
	{0x20, 0x10, 0x30, 0x20, 0x1f},
	// POKEMON_MOGELBAUM
	{0x1d, 0xf, 0x30, 0x1e, 0x20},
	// POKEMON_CLAVION
	{0x23, 0x25, 0x8, 0x25, 0x33},
	// POKEMON_LICHTEL
	{0x1e, 0x18, 0x8, 0x1c, 0x27},
	// POKEMON_LATERNECTO
	{0x1d, 0x21, 0x8, 0x20, 0x2f},
	// POKEMON_SKLELABRA
	{0x1e, 0x29, 0x18, 0x1e, 0x35},
	// POKEMON_GRIFFEL
	{0x1f, 0x20, 0x8, 0x24, 0x2e},
	// POKEMON_SHNEBEDECK
	{0x1c, 0xc, 0x30, 0x1b, 0x19},
	// POKEMON_REXBLISAR
	{0x1b, 0x28, 0x8, 0x16, 0x35},
	// POKEMON_AMBIDIFFEL
	{0x1d, 0x13, 0x30, 0x1f, 0x21},
	// POKEMON_FELINO
	{0x15, 0x9, 0x30, 0x12, 0x18},
	// POKEMON_MORLORD
	{0x11, 0x1b, 0x30, 0x11, 0x29},
	// POKEMON_PSIANA
	{0x23, 0x15, 0x30, 0x23, 0x22},
	// POKEMON_NACHTARA
	{0x24, 0x13, 0x30, 0x20, 0x22},
	// POKEMON_KRAMURX
	{0x1e, 0x13, 0x28, 0x1d, 0x25},
	// POKEMON_LASCHOKING
	{0x28, 0x21, 0x8, 0x26, 0x2e},
	// POKEMON_KRAMSHEF
	{0x20, 0x17, 0x8, 0x1f, 0x21},
	// POKEMON_ICOGNITO
	{0x1d, 0x9, 0x30, 0x1d, 0x1a},
	// POKEMON_FROSDEDJE
	{0xb, 0xd, 0x28, 0x11, 0x1d},
	// POKEMON_SKORGRO
	{0x1d, 0x12, 0x10, 0x19, 0x25},
	// POKEMON_TANNZA
	{0x19, 0x17, 0x8, 0x1e, 0x26},
	// POKEMON_FORSTELLKA
	{0x10, 0x1b, 0x30, 0xc, 0x2d},
	// POKEMON_ELEVOLTEK
	{0x1e, 0x13, 0x8, 0x1d, 0x23},
	// POKEMON_SKORGLA
	{0xc, 0xd, 0x28, 0xd, 0x1c},
	// POKEMON_STAHLOS
	{0x1b, 0x15, 0x30, 0x1a, 0x23},
	// POKEMON_SNUBBULL
	{0x1c, 0x9, 0x30, 0x19, 0x18},
	// POKEMON_GRANBULL
	{0x1f, 0x26, 0x20, 0x1d, 0x33},
	// POKEMON_MAMUTEL
	{0x15, 0xf, 0x10, 0x1a, 0x1a},
	// POKEMON_SCHEROX
	{0x25, 0xa, 0x30, 0x24, 0x18},
	// POKEMON_POTTROTT
	{0x18, 0x19, 0x28, 0x1a, 0x26},
	// POKEMON_SKARABORN
	{0x1c, 0x13, 0x30, 0x1d, 0x24},
	// POKEMON_KRYPPUK
	{0x1e, 0x12, 0x30, 0x1b, 0x23},
	// POKEMON_TEDDIURSA
	{0x1e, 0x4, 0x28, 0x1d, 0x14},
	// POKEMON_URSARING
	{0x20, 0x18, 0x30, 0x20, 0x28},
	// POKEMON_SCHNECKMAG
	{0x16, 0x11, 0x30, 0x17, 0x23},
	// POKEMON_MAGCARGO
	{0x1c, 0x18, 0x30, 0x1b, 0x25},
	// POKEMON_QUIEKEL
	{0x18, 0x23, 0x20, 0x18, 0x36},
	// POKEMON_KEIFEL
	{0x19, 0x1d, 0x28, 0x19, 0x2b},
	// POKEMON_CORASONN
	{0x15, 0x1f, 0x28, 0x13, 0x2b},
	// POKEMON_REMORAID
	{0x1c, 0x11, 0x30, 0x1a, 0x20},
	// POKEMON_OCTILLERY
	{0x1d, 0x11, 0x30, 0x1b, 0x1f},
	// POKEMON_BOTOGEL
	{0x16, 0x1e, 0x28, 0x1f, 0x27},
	// POKEMON_SCHLURPLEK
	{0x1e, 0x0, 0x28, 0x13, 0x7},
	// POKEMON_PANZAERON
	{0x25, 0x11, 0x30, 0x25, 0x1f},
	// POKEMON_HUNDUSTER
	{0xd, 0x13, 0x30, 0xd, 0x24},
	// POKEMON_HUNDEMON
	{0xe, 0x13, 0x28, 0xa, 0x2c},
	// POKEMON_SEEDRAKING
	{0x1b, 0x11, 0x30, 0x19, 0x24},
	// POKEMON_PHANPY
	{0x11, 0x15, 0x30, 0x19, 0x2c},
	// POKEMON_DONPHAN
	{0x18, 0x11, 0x30, 0x11, 0x20},
	// POKEMON_PORYGON2
	{0x15, 0x15, 0x28, 0x17, 0x28},
	// POKEMON_VOLUMINAS
	{0x18, 0x10, 0x30, 0x1b, 0x25},
	// POKEMON_TRAUNMAGIL
	{0x1e, 0x12, 0x30, 0x1f, 0x1f},
	// POKEMON_RABAUZ
	{0x1a, 0x39, 0x10, 0x1a, 0x2b},
	// POKEMON_KAPOERA
	{0x20, 0x18, 0x30, 0x21, 0x26},
	// POKEMON_KUSSILLA
	{0x1d, 0x14, 0x30, 0x1d, 0x23},
	// POKEMON_ELEKID
	{0x1c, 0x15, 0x30, 0x1a, 0x24},
	// POKEMON_MAGBY
	{0x18, 0xe, 0x30, 0x18, 0x1e},
	// POKEMON_MILTANK
	{0x1d, 0x9, 0x30, 0x1d, 0x19},
	// POKEMON_HEITEIRA
	{0x29, 0xc, 0x28, 0x27, 0x1e},
	// POKEMON_RAIKOU
	{0x8, 0x9, 0x28, 0xb, 0x18},
	// POKEMON_ENTEI
	{0x23, 0x1d, 0x28, 0x26, 0x2c},
	// POKEMON_SUICUNE
	{0x1c, 0x18, 0x30, 0x1a, 0x24},
	// POKEMON_LARVITAR
	{0x1b, 0x19, 0x30, 0x1b, 0x28},
	// POKEMON_PUPITAR
	{0x6, 0xb, 0x28, 0xd, 0x19},
	// POKEMON_DESPOTAR
	{0x8, 0x2a, 0x8, 0x14, 0x34},
	// POKEMON_LUGIA
	{0xd, 0x25, 0x8, 0xe, 0x34},
	// POKEMON_HO_OH
	{0x15, 0x21, 0x8, 0x1a, 0x2b},
	// POKEMON_CELEBI
	{0x1f, 0x12, 0x8, 0x1e, 0x1c},
	// POKEMON_BISAFLORM
	{0x20, 0x17, 0x8, 0x1f, 0x21},
	// POKEMON_GLURAKM
	{0x1c, 0x19, 0x8, 0x1b, 0x23},
	// POKEMON_AQUANAM
	{0x21, 0x19, 0x8, 0x20, 0x23},
	// POKEMON_BLITZAM
	{0x1b, 0x13, 0x8, 0x1a, 0x1d},
	// POKEMON_FLAMARM
	{0x20, 0x16, 0x8, 0x1f, 0x21},
	// POKEMON_DURENGARDA
	{0x20, 0x19, 0x8, 0x1f, 0x23},
	// POKEMON_IN
	{0x20, 0x19, 0x8, 0x1f, 0x23},
	// POKEMON_GAME
	{0x20, 0x16, 0x8, 0x1f, 0x20},
	// POKEMON_TURTOKM
	{0x1d, 0x1a, 0x8, 0x1c, 0x24},
	// POKEMON_AMPHARAOSM
	{0x20, 0x16, 0x8, 0x1f, 0x1f},
	// POKEMON_GENGARM
	{0x20, 0x1c, 0x8, 0x1f, 0x26},
	// POKEMON_BIBORM
	{0x20, 0x1a, 0x8, 0x1f, 0x23},
	// POKEMON_ALTARIAM
	{0x20, 0x1a, 0x8, 0x1f, 0x23},
	// POKEMON_GEOWAZM
	{0x20, 0x16, 0x8, 0x1f, 0x20},
	// POKEMON_SENGOM
	{0x1d, 0x16, 0x8, 0x1c, 0x20},
	// POKEMON_VIPITISM
	{0x20, 0x15, 0x8, 0x1f, 0x1f},
	// POKEMON_ZOBIRISM
	{0x20, 0x19, 0x8, 0x1f, 0x23},
	// POKEMON_10d
	{0x20, 0x1e, 0x8, 0x1f, 0x28},
	// POKEMON_10e
	{0x20, 0x17, 0x8, 0x1f, 0x21},
	// POKEMON_10f
	{0x1e, 0x1e, 0x8, 0x1d, 0x28},
	// POKEMON_110
	{0x20, 0x1d, 0x8, 0x1f, 0x27},
	// POKEMON_111
	{0x20, 0x19, 0x8, 0x1f, 0x23},
	// POKEMON_112
	{0x20, 0x15, 0x8, 0x1f, 0x1f},
	// POKEMON_113
	{0x20, 0x19, 0x8, 0x1f, 0x23},
	// POKEMON_114
	{0x1a, 0xf, 0x30, 0x19, 0x20},
	// POKEMON_LOCKSCHAL
	{0xd, 0x5, 0x10, 0x5, 0x13},
	// POKEMON_STICHSCHAL
	{0x10, 0x4, 0x28, 0xc, 0x12},
	// POKEMON_STAHLSTICH
	{0x17, 0x18, 0x30, 0x15, 0x25},
	// POKEMON_WELUNO
	{0x20, 0x12, 0x28, 0x1e, 0x20},
	// POKEMON_ORTHODOS
	{0x1a, 0x7, 0x28, 0x1d, 0x13},
	// POKEMON_ZERBERTRES
	{0x1b, 0x1d, 0x28, 0x19, 0x2c},
	// POKEMON_SEEKID
	{0x1d, 0x11, 0x30, 0x1c, 0x20},
	// POKEMON_SEESKULL
	{0x1b, 0x11, 0x28, 0x1b, 0x23},
	// POKEMON_SKULLYDRA
	{0x14, 0x12, 0x30, 0xf, 0x20},
	// POKEMON_FIFFYEN
	{0x9, 0xd, 0x28, 0x9, 0x1c},
	// POKEMON_MAGNAYEN
	{0xb, 0x1a, 0x30, 0x9, 0x2b},
	// POKEMON_ZIGZACHS
	{0xd, 0x28, 0x18, 0xb, 0x37},
	// POKEMON_GERADAKS
	{0x21, 0x17, 0x30, 0x1f, 0x26},
	// POKEMON_WAUMPEL
	{0x13, 0x1c, 0x30, 0x11, 0x2a},
	// POKEMON_SCHALOKO
	{0xf, 0x1b, 0x8, 0xe, 0x28},
	// POKEMON_PAPINELLA
	{0x14, 0x1d, 0x30, 0x11, 0x2c},
	// POKEMON_PANEKON
	{0x14, 0x19, 0x8, 0x16, 0x26},
	// POKEMON_PUDOX
	{0x19, 0x25, 0x28, 0x17, 0x32},
	// POKEMON_LOTURZEL
	{0x22, 0x10, 0x30, 0x29, 0x1d},
	// POKEMON_LOMBRERO
	{0x1c, 0xf, 0x28, 0x1b, 0x24},
	// POKEMON_KAPPALORES
	{0x1b, 0x17, 0x30, 0x18, 0x28},
	// POKEMON_SAMURZEL
	{0x20, 0xd, 0x30, 0x1a, 0x1d},
	// POKEMON_BLANAS
	{0x32, 0x11, 0x28, 0x2e, 0x23},
	// POKEMON_TENGULIST
	{0x18, 0x1a, 0x30, 0x17, 0x28},
	// POKEMON_NINCADA
	{0x17, 0x21, 0x0, 0x17, 0x2f},
	// POKEMON_NINJASK
	{0x16, 0x19, 0x8, 0x18, 0x2a},
	// POKEMON_NINJATOM
	{0x17, 0x10, 0x30, 0x14, 0x1e},
	// POKEMON_SCHWALBINI
	{0xc, 0xa, 0x28, 0x5, 0x16},
	// POKEMON_SCHWALBOSS
	{0x1f, 0x16, 0x30, 0x1d, 0x23},
	// POKEMON_KNILZ
	{0x25, 0xc, 0x30, 0x23, 0x19},
	// POKEMON_KAPILZ
	{0x21, 0x16, 0x30, 0x1f, 0x27},
	// POKEMON_PANDIR
	{0x1a, 0x16, 0x10, 0x15, 0x26},
	// POKEMON_WINGULL
	{0x1d, 0xa, 0x10, 0x9, 0x1b},
	// POKEMON_PELIPPER
	{0x1d, 0x16, 0x30, 0x1c, 0x25},
	// POKEMON_GEHWEIHER
	{0x1a, 0x21, 0x8, 0x14, 0x30},
	// POKEMON_MASKEREGEN
	{0x17, 0x17, 0x30, 0x16, 0x28},
	// POKEMON_WAILMER
	{0x17, 0x3, 0x30, 0x9, 0x13},
	// POKEMON_WAILORD
	{0x24, 0x1a, 0x30, 0x22, 0x2a},
	// POKEMON_ENECO
	{0x1e, 0x12, 0x30, 0x1c, 0x21},
	// POKEMON_ENEKORO
	{0x19, 0x10, 0x30, 0x13, 0x1e},
	// POKEMON_KECLEON
	{0x1d, 0x15, 0x30, 0x1b, 0x22},
	// POKEMON_PUPPANCE
	{0x1e, 0xd, 0x28, 0x1d, 0x24},
	// POKEMON_LEPUMENTAS
	{0x1f, 0x10, 0x30, 0x15, 0x23},
	// POKEMON_NASGNET
	{0xe, 0x19, 0x28, 0xa, 0x27},
	// POKEMON_MAGBRANT
	{0x1e, 0x16, 0x30, 0x1d, 0x27},
	// POKEMON_ZWIRRFINST
	{0x17, 0x12, 0x30, 0x15, 0x1e},
	// POKEMON_SCHMERBE
	{0x18, 0x20, 0x28, 0x17, 0x31},
	// POKEMON_WELSAR
	{0x19, 0xf, 0x30, 0x13, 0x1c},
	// POKEMON_LIEBISKUS
	{0x1f, 0x14, 0x30, 0x1d, 0x23},
	// POKEMON_KREBSCORPS
	{0x14, 0xc, 0x28, 0x18, 0x23},
	// POKEMON_KREBUTACK
	{0x18, 0x1e, 0x28, 0x16, 0x2f},
	// POKEMON_BARSCHWA
	{0x20, 0xc, 0x28, 0x1f, 0x1d},
	// POKEMON_MILOTIC
	{0x16, 0x19, 0x30, 0x13, 0x22},
	// POKEMON_KANIVANHA
	{0x19, 0xc, 0x28, 0x17, 0x27},
	// POKEMON_TOHAIDO
	{0x29, 0x13, 0x30, 0x17, 0x18},
	// POKEMON_KNACKLION
	{0x10, 0x27, 0x20, 0xe, 0x34},
	// POKEMON_VIBRAVA
	{0x22, 0x7, 0x10, 0x21, 0x13},
	// POKEMON_LIBELLDRA
	{0x22, 0x13, 0x30, 0x1c, 0x23},
	// POKEMON_RIOLU
	{0x24, 0xf, 0x28, 0x26, 0x1c},
	// POKEMON_LUCARIO
	{0x11, 0x18, 0x30, 0x14, 0x27},
	// POKEMON_FRIZELBLIZ
	{0x2f, 0x18, 0x28, 0x2e, 0x29},
	// POKEMON_VOLTENSO
	{0x10, 0x1a, 0x30, 0xd, 0x2a},
	// POKEMON_CAMAUB
	{0xd, 0x22, 0x28, 0xe, 0x36},
	// POKEMON_CAMERUPT
	{0x1e, 0xf, 0x30, 0x18, 0x1f},
	// POKEMON_SEEMOPS
	{0x1c, 0x9, 0x30, 0x1a, 0x18},
	// POKEMON_SEEJONG
	{0x19, 0x1, 0x28, 0x10, 0x16},
	// POKEMON_WALRAISA
	{0x1f, 0x17, 0x30, 0x1d, 0x29},
	// POKEMON_TUSKA
	{0x1d, 0xe, 0x28, 0x1d, 0x1b},
	// POKEMON_NOKTUSKA
	{0x1e, 0x16, 0x30, 0x1e, 0x26},
	// POKEMON_SCHNEPPKE
	{0x1a, 0x1c, 0x8, 0x1a, 0x31},
	// POKEMON_FIRNONTOR
	{0x1c, 0x16, 0x8, 0x19, 0x2c},
	// POKEMON_LUNASTEIN
	{0x18, 0x18, 0x10, 0x17, 0x31},
	// POKEMON_SONNFEL
	{0x1b, 0x10, 0x30, 0x18, 0x1f},
	// POKEMON_AZURILL
	{0x21, 0x14, 0x30, 0x1b, 0x28},
	// POKEMON_SPOINK
	{0x14, 0x10, 0x30, 0x15, 0x20},
	// POKEMON_GROINK
	{0x1c, 0x16, 0x8, 0x1d, 0x25},
	// POKEMON_PLUSLE
	{0x21, 0x16, 0x8, 0x1f, 0x26},
	// POKEMON_MINUN
	{0x2d, 0x14, 0x30, 0x2f, 0x24},
	// POKEMON_FLUNKIFER
	{0x1f, 0x17, 0x30, 0x1e, 0x25},
	// POKEMON_MEDITIE
	{0x21, 0xf, 0x28, 0x1e, 0x1d},
	// POKEMON_MEDITALIS
	{0x1b, 0x16, 0x10, 0x17, 0x23},
	// POKEMON_WABLU
	{0x1d, 0xb, 0x10, 0x1a, 0x1a},
	// POKEMON_ALTARIA
	{0x1a, 0x15, 0x30, 0x1b, 0x26},
	// POKEMON_ISSO
	{0x10, 0x18, 0x8, 0x14, 0x2e},
	// POKEMON_ZWIRRLICHT
	{0x1c, 0xf, 0x30, 0x1a, 0x28},
	// POKEMON_ZWIRRKLOP
	{0x1e, 0x11, 0x30, 0x1d, 0x20},
	// POKEMON_ROSELIA
	{0x19, 0x1e, 0x30, 0x18, 0x2f},
	// POKEMON_BUMMELZ
	{0x10, 0x12, 0x28, 0x14, 0x24},
	// POKEMON_MUNTIER
	{0x37, 0xf, 0x30, 0x29, 0x21},
	// POKEMON_LETARKING
	{0x1b, 0x18, 0x30, 0x17, 0x26},
	// POKEMON_SCHLUPPUCK
	{0x1f, 0x6, 0x30, 0x15, 0x13},
	// POKEMON_SCHLUKWECH
	{0x18, 0xa, 0x28, 0x20, 0x18},
	// POKEMON_TROPIUS
	{0x1f, 0x19, 0x30, 0x1d, 0x29},
	// POKEMON_KAUMALAT
	{0x1c, 0x12, 0x28, 0x22, 0x27},
	// POKEMON_KNARKSEL
	{0x10, 0x10, 0x28, 0x1a, 0x2a},
	// POKEMON_KNAKRACK
	{0x20, 0x1a, 0x30, 0x1e, 0x26},
	// POKEMON_PERLU
	{0x13, 0x1e, 0x28, 0x15, 0x33},
	// POKEMON_AALABYSS
	{0xd, 0x1f, 0x28, 0x3, 0x32},
	// POKEMON_SAGANABYSS
	{0x2a, 0x11, 0x28, 0x2a, 0x22},
	// POKEMON_ABSOL
	{0x16, 0x19, 0x8, 0x17, 0x27},
	// POKEMON_SHUPPET
	{0x1c, 0x14, 0x8, 0x1b, 0x23},
	// POKEMON_BANETTE
	{0xe, 0xd, 0x30, 0xb, 0x1e},
	// POKEMON_VIPITIS
	{0x18, 0xc, 0x28, 0x15, 0x1a},
	// POKEMON_SENGO
	{0xc, 0x1f, 0x30, 0x9, 0x2d},
	// POKEMON_RELICANTH
	{0x18, 0x1c, 0x30, 0x1a, 0x2c},
	// POKEMON_STOLLUNIOR
	{0xb, 0x21, 0x30, 0x12, 0x2f},
	// POKEMON_STOLLRAK
	{0x10, 0xb, 0x28, 0x16, 0x1b},
	// POKEMON_STOLLOSS
	{0x1d, 0x18, 0x8, 0x1b, 0x26},
	// POKEMON_FORMEO
	{0x25, 0x15, 0x8, 0x21, 0x25},
	// POKEMON_VOLBEAT
	{0x20, 0x12, 0x8, 0x1f, 0x20},
	// POKEMON_ILLUMISE
	{0x1e, 0x11, 0x30, 0x1f, 0x1e},
	// POKEMON_LILIEP
	{0x12, 0x16, 0x28, 0x15, 0x28},
	// POKEMON_WIELIE
	{0x1c, 0x1e, 0x30, 0x1b, 0x2b},
	// POKEMON_ANORITH
	{0x15, 0x5, 0x28, 0x14, 0x13},
	// POKEMON_ARMALDO
	{0x1f, 0x17, 0x30, 0x20, 0x23},
	// POKEMON_TRASLA
	{0x1c, 0x12, 0x30, 0x1f, 0x1e},
	// POKEMON_KIRLIA
	{0x35, 0x7, 0x28, 0x32, 0x14},
	// POKEMON_GUARDEVOIR
	{0x17, 0x13, 0x30, 0x16, 0x26},
	// POKEMON_KINDWURM
	{0x19, 0x1b, 0x30, 0x19, 0x2c},
	// POKEMON_DRASCHEL
	{0x9, 0x11, 0x30, 0xa, 0x21},
	// POKEMON_BRUTALANDA
	{0x16, 0x19, 0x8, 0x18, 0x23},
	// POKEMON_TANHEL
	{0x22, 0xf, 0x10, 0x1f, 0x21},
	// POKEMON_METANG
	{0x24, 0x1b, 0x28, 0x22, 0x2b},
	// POKEMON_METAGROSS
	{0x16, 0x7, 0x28, 0x14, 0x12},
	// POKEMON_REGIROCK
	{0x19, 0xc, 0x28, 0x17, 0x19},
	// POKEMON_REGICE
	{0x19, 0xd, 0x28, 0x19, 0x19},
	// POKEMON_REGISTEEL
	{0xe, 0x19, 0x28, 0xb, 0x26},
	// POKEMON_KYOGRE
	{0x4, 0xb, 0x28, 0xa, 0x19},
	// POKEMON_GROUDON
	{0xc, 0xe, 0x10, 0xe, 0x1f},
	// POKEMON_RAYQUAZA
	{0x1e, 0xc, 0x10, 0x23, 0x19},
	// POKEMON_LATIAS
	{0x5, 0xe, 0x10, 0x5, 0x1d},
	// POKEMON_LATIOS
	{0x1c, 0x15, 0x8, 0x1e, 0x22},
	// POKEMON_JIRACHI
	{0x1b, 0x8, 0x28, 0x1c, 0x16},
	// POKEMON_DEOXYS
	{0x1d, 0xc, 0x8, 0x1c, 0x1a},
	// POKEMON_PALIMPALIM
	{0x20, 0x21, 0x8, 0x20, 0x2b},
	// POKEMON_EGG
	{0x20, 0x23, 0x8, 0x20, 0x2d},
	// POKEMON_ICOGNITO_B
	{0x0, 0x0, 0x0, 0xc2, 0x71},
	// POKEMON_ICOGNITO_C
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_D
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_E
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_F
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_G
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_H
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_I
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_J
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_K
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_L
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_M
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_N
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_O
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_P
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_Q
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_R
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_S
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_T
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_U
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_V
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_W
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_X
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_Y
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_Z
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_EXCLAMATION
	{0x16, 0x1b, 0x30, 0x16, 0x29},
	// POKEMON_ICOGNITO_QUESTION
	{0x16, 0x1b, 0x30, 0x16, 0x29},
        // POKEMON TEST
        {0x1e, 0xc, 0x10, 0x23, 0x19}

};