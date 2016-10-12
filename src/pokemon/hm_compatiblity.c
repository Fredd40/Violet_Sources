#include "types.h"
#include "pokemon.h"

u8 pokemon_tm_compatilbity [POKEMON_CNT][8] = {
  	// POKEMON_POKEMON_0
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_BISASAM
	{0x28, 0x7f, 0x13, 0xf6, 0x40, 0xbf, 0x61, 0x0},
	// POKEMON_BISAKNOSP
	{0x20, 0x7, 0x35, 0x84, 0x8, 0x1e, 0xe4, 0x0},
	// POKEMON_BISAFLOR
	{0x30, 0x47, 0x35, 0x86, 0x8, 0x1e, 0xe4, 0x0},
	// POKEMON_GLUMANDA
	{0x23, 0x6, 0x51, 0xcc, 0xa4, 0x1e, 0xa6, 0x0},
	// POKEMON_GLUTEXO
	{0x23, 0x6, 0x51, 0xcc, 0xa4, 0x1e, 0xa6, 0x0},
	// POKEMON_GLURAK
	{0x33, 0x46, 0x51, 0xce, 0xa4, 0x5e, 0xae, 0x0},
	// POKEMON_SCHIGGY
	{0x65, 0x32, 0x53, 0xcc, 0x0, 0x1e, 0xb0, 0x3},
	// POKEMON_SCHILLOK
	{0x65, 0x32, 0x53, 0xcc, 0x0, 0x1e, 0xb0, 0x3},
	// POKEMON_TURTOK
	{0x75, 0x72, 0x53, 0xce, 0x0, 0x1e, 0xb0, 0x3},
	// POKEMON_DARTIRI
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_DARTIGNIS
	{0x90, 0xe, 0x60, 0x84, 0xa4, 0x7e, 0xf, 0x0},
	// POKEMON_FIARO
	{0x90, 0xe, 0x60, 0x84, 0xa4, 0x7e, 0xf, 0x0},
	// POKEMON_HORNLIU
	{0x90, 0xe, 0x60, 0x84, 0xa4, 0x7e, 0xf, 0x0},
	// POKEMON_KOKUNA
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_BIBOR
	{0x20, 0x46, 0x35, 0xc4, 0x88, 0x3e, 0x84, 0x0},
	// POKEMON_STARALILI
	{0x20, 0x6, 0x13, 0x84, 0x80, 0x7e, 0x8, 0x0},
	// POKEMON_STARAVIA
	{0x20, 0x6, 0x13, 0x84, 0x80, 0x7e, 0x8, 0x0},
	// POKEMON_STARAPTOR
	{0x20, 0x46, 0x13, 0x84, 0x80, 0x7e, 0x8, 0x0},
	// POKEMON_BRONZEL
	{0x20, 0x3e, 0xd3, 0xad, 0x2, 0x3e, 0x84, 0x0},
	// POKEMON_BRONZONG
	{0x27, 0x86, 0x3b, 0xb6, 0x51, 0xbe, 0x1, 0x0},
	// POKEMON_MAEHIKEL
	{0x28, 0x86, 0x3b, 0xb6, 0x51, 0xbe, 0x1, 0x0},
	// POKEMON_CHEVRUMM
	{0xb0, 0x7, 0x37, 0xcc, 0x40, 0x1e, 0xa4, 0x0},
	// POKEMON_PARAGONI
	{0xb0, 0x47, 0x37, 0xcc, 0x40, 0x1e, 0xa4, 0x0},
	// POKEMON_TROMBORK
	{0x20, 0x7, 0xb5, 0xbc, 0x1, 0x3e, 0xa4, 0x0},
	// POKEMON_PIKACHU
	{0x20, 0x7, 0xb5, 0xbc, 0x1, 0x3e, 0xa4, 0x0},
	// POKEMON_RAICHU
	{0x21, 0xc2, 0xd3, 0xcd, 0x2, 0x3e, 0xe0, 0x0},
	// POKEMON_SANDAN
	{0x21, 0x6, 0x51, 0xce, 0xd0, 0x3e, 0xa4, 0x0},
	// POKEMON_SANDAMER
	{0x21, 0x46, 0x51, 0xce, 0xd0, 0x3e, 0xa4, 0x0},
	// POKEMON_NIDORANW
	{0x24, 0x36, 0xd3, 0x8d, 0x8a, 0x3e, 0xa4, 0x0},
	// POKEMON_NIDORINA
	{0x24, 0x36, 0xd3, 0x8d, 0x8a, 0x3e, 0xa4, 0x0},
	// POKEMON_NIDOQUEEN
	{0x35, 0x7e, 0xd3, 0xef, 0xfe, 0x3f, 0xb4, 0x0},
	// POKEMON_NIDORANM
	{0x24, 0x36, 0xd3, 0x8d, 0xa, 0x3e, 0xa4, 0x0},
	// POKEMON_NIDORINO
	{0x24, 0x36, 0xd3, 0x8d, 0xa, 0x3e, 0xa4, 0x0},
	// POKEMON_NIDOKING
	{0x35, 0x7e, 0xd3, 0xef, 0x7e, 0x3f, 0xb4, 0x0},
	// POKEMON_FLOETTE
	{0x2d, 0xb6, 0xfb, 0xfd, 0x27, 0x1e, 0x61, 0x0},
	// POKEMON_FLORGES
	{0x2d, 0xf6, 0xfb, 0xfd, 0x27, 0x1e, 0x61, 0x0},
	// POKEMON_VULPIX
	{0x30, 0x6, 0x59, 0x8c, 0x24, 0x1e, 0x2, 0x0},
	// POKEMON_VULNONA
	{0x30, 0x46, 0x59, 0x8c, 0x24, 0x1e, 0x2, 0x0},
	// POKEMON_PUMMELUFF
	{0x25, 0xb6, 0xbb, 0xfd, 0x27, 0x1e, 0x61, 0x0},
	// POKEMON_KNUDDELUFF
	{0x25, 0xf6, 0xbb, 0xfd, 0x27, 0x1e, 0x61, 0x0},
	// POKEMON_ZUBAT
	{0x20, 0xe, 0x17, 0xa4, 0x88, 0x7f, 0x1, 0x0},
	// POKEMON_GOLBAT
	{0x20, 0x4e, 0x17, 0xa4, 0x88, 0x7f, 0x1, 0x0},
	// POKEMON_MYRAPLA
	{0x20, 0x7, 0x35, 0x84, 0x8, 0x1e, 0x44, 0x0},
	// POKEMON_DUFLOR
	{0x20, 0x7, 0x35, 0x84, 0x8, 0x1e, 0x44, 0x0},
	// POKEMON_GIFLOR
	{0x20, 0x47, 0x35, 0x84, 0x8, 0x1e, 0x44, 0x0},
	// POKEMON_FOLIPURBA
	{0x20, 0x7, 0x35, 0x8c, 0x88, 0x3e, 0xc4, 0x0},
	// POKEMON_FEELINARA
	{0x30, 0x47, 0x75, 0xac, 0x80, 0x1e, 0xa4, 0x0},
	// POKEMON_WATTZAPF
	{0x28, 0xc6, 0x5b, 0xbc, 0x1, 0x9e, 0x84, 0x0},
	// POKEMON_VOLTULA
	{0x20, 0x82, 0x93, 0x85, 0x0, 0x3e, 0x44, 0x0},
	// POKEMON_DIGDA
	{0x20, 0x82, 0x93, 0x85, 0x0, 0x3e, 0x44, 0x0},
	// POKEMON_DIGDRI
	{0x20, 0x46, 0x11, 0x8e, 0xc8, 0x3e, 0x84, 0x0},
	// POKEMON_KASTADUR
	{0x24, 0xe, 0xd3, 0xad, 0x82, 0x3f, 0x45, 0x0},
	// POKEMON_TENTANTEL
	{0x20, 0x7, 0xb0, 0x84, 0x0, 0xe, 0x80, 0x0},
	// POKEMON_ENTON
	{0x20, 0x7, 0xb0, 0x84, 0x0, 0xe, 0x80, 0x0},
	// POKEMON_ENTORON
	{0x6d, 0x72, 0x53, 0xcc, 0x80, 0x1e, 0xf0, 0x3},
	// POKEMON_MENKI
	{0xa1, 0xe, 0xd3, 0xcf, 0xc0, 0x3e, 0xa2, 0x0},
	// POKEMON_RASAFF
	{0xa1, 0x4e, 0xd3, 0xcf, 0xc0, 0x3e, 0xa2, 0x0},
	// POKEMON_FUKANO
	{0x30, 0x6, 0x51, 0x8c, 0xa4, 0x3e, 0xa2, 0x0},
	// POKEMON_ARKANI
	{0x30, 0x46, 0x51, 0x8c, 0xa4, 0x3e, 0xa2, 0x0},
	// POKEMON_GRAMOKLES
	{0x64, 0x32, 0x13, 0x9c, 0x0, 0x3e, 0x10, 0x3},
	// POKEMON_DUOKLES
	{0x20, 0x2, 0x10, 0xc4, 0x83, 0x1a, 0x84, 0x0},
	// POKEMON_DURENGARD
	{0x20, 0x2, 0x10, 0xc4, 0x83, 0x1a, 0x84, 0x0},
	// POKEMON_ABRA
	{0x28, 0xca, 0x59, 0xe4, 0xc3, 0xbf, 0x85, 0x0},
	// POKEMON_KADABRA
	{0x29, 0x8e, 0x5b, 0xb4, 0x3, 0xbf, 0x41, 0x0},
	// POKEMON_SIMSALA
	{0x29, 0xce, 0x5b, 0xb4, 0x3, 0xbf, 0x41, 0x0},
	// POKEMON_MACHOLLO
	{0xa1, 0x6, 0x13, 0xce, 0x64, 0x3e, 0xa0, 0x0},
	// POKEMON_MASCHOCK
	{0xa1, 0x6, 0x13, 0xce, 0x64, 0x3e, 0xa0, 0x0},
	// POKEMON_MACHOMEI
	{0xa1, 0x46, 0x13, 0xce, 0x64, 0x3e, 0xa0, 0x0},
	// POKEMON_KNOFENSA
	{0x20, 0x7, 0x35, 0x84, 0x8, 0x3e, 0x44, 0x0},
	// POKEMON_ULTRIGARIA
	{0x20, 0x7, 0x35, 0x84, 0x8, 0x3e, 0x44, 0x0},
	// POKEMON_SARZENIA
	{0x20, 0x47, 0x35, 0x84, 0x8, 0x3e, 0x44, 0x0},
	// POKEMON_TENTACHA
	{0x64, 0x32, 0x17, 0x84, 0x8, 0x3e, 0x14, 0x3},
	// POKEMON_TENTOXA
	{0x64, 0x72, 0x17, 0x84, 0x8, 0x3e, 0x14, 0x3},
	// POKEMON_KLEINSTEIN
	{0x21, 0x6, 0x11, 0xce, 0x74, 0x1e, 0xa0, 0x0},
	// POKEMON_GEOROK
	{0x21, 0x6, 0x11, 0xce, 0x74, 0x1e, 0xa0, 0x0},
	// POKEMON_GEOWAZ
	{0x31, 0x46, 0x11, 0xce, 0x74, 0x1e, 0xa0, 0x0},
	// POKEMON_PONITA
	{0x20, 0x6, 0x71, 0x84, 0x24, 0x1e, 0x22, 0x0},
	// POKEMON_GALLOPA
	{0x20, 0x46, 0x71, 0x84, 0x24, 0x1e, 0x22, 0x0},
	// POKEMON_FLEGMON
	{0x6c, 0x36, 0x5b, 0xbe, 0x24, 0x9e, 0x70, 0x2},
	// POKEMON_LAHMUS
	{0x6d, 0x76, 0x5b, 0xfe, 0x24, 0x9e, 0xf0, 0x2},
	// POKEMON_MAGNETILO
	{0x20, 0x6, 0x93, 0x85, 0x3, 0xe, 0x40, 0x0},
	// POKEMON_MAGNETON
	{0x20, 0x46, 0x93, 0x85, 0x3, 0xe, 0x40, 0x0},
	// POKEMON_PORENTA
	{0x20, 0x6, 0x51, 0x84, 0x80, 0x7e, 0xc, 0x0},
	// POKEMON_DODU
	{0x20, 0x6, 0x11, 0x84, 0x80, 0x7e, 0x8, 0x0},
	// POKEMON_DODRI
	{0x20, 0x4e, 0x11, 0x84, 0x80, 0x7f, 0x8, 0x0},
	// POKEMON_JURBO
	{0x64, 0x32, 0x1b, 0x84, 0x0, 0x3e, 0x10, 0x3},
	// POKEMON_JUGONG
	{0x64, 0x72, 0x1b, 0x84, 0x0, 0x3e, 0x10, 0x3},
	// POKEMON_SLEIMA
	{0x20, 0xe, 0x97, 0x8d, 0x6e, 0x3f, 0x0, 0x0},
	// POKEMON_SLEIMOK
	{0x21, 0x4e, 0x97, 0xcd, 0x6e, 0x3f, 0xa0, 0x0},
	// POKEMON_MUSCHAS
	{0x64, 0x32, 0x13, 0x84, 0x0, 0x1e, 0x10, 0x2},
	// POKEMON_AUSTOS
	{0x64, 0x72, 0x13, 0x84, 0x0, 0x1f, 0x10, 0x2},
	// POKEMON_NEBULAK
	{0x20, 0xe, 0x97, 0xb4, 0x8, 0xbf, 0x1, 0x0},
	// POKEMON_ALPOLLO
	{0x20, 0xe, 0x97, 0xb4, 0x8, 0xbf, 0x1, 0x0},
	// POKEMON_GENGAR
	{0x21, 0x4e, 0x97, 0xf5, 0x8, 0xbf, 0xa1, 0x0},
	// POKEMON_ONIX
	{0x30, 0xe, 0x51, 0x8e, 0x50, 0x1f, 0xa0, 0x0},
	// POKEMON_TRAUMATO
	{0x29, 0x8e, 0x1b, 0xf4, 0x1, 0xbf, 0x41, 0x0},
	// POKEMON_HYPNO
	{0x29, 0xce, 0x1b, 0xf4, 0x1, 0xbf, 0x41, 0x0},
	// POKEMON_KRABBY
	{0x64, 0x32, 0x13, 0x8c, 0x40, 0x3e, 0xb4, 0x2},
	// POKEMON_KINGLER
	{0x64, 0x72, 0x13, 0x8c, 0x40, 0x3e, 0xb4, 0x2},
	// POKEMON_VOLTOBAL
	{0x20, 0x8a, 0x93, 0x85, 0x2, 0x2f, 0x40, 0x0},
	// POKEMON_LEKTROBAL
	{0x20, 0xca, 0x93, 0x85, 0x2, 0x2f, 0x40, 0x0},
	// POKEMON_OWEI
	{0x20, 0x87, 0x35, 0x94, 0x9, 0xbe, 0x60, 0x0},
	// POKEMON_KOKOWEI
	{0x20, 0xc7, 0x35, 0x94, 0x9, 0xbe, 0x60, 0x0},
	// POKEMON_TRAGOSSO
	{0x21, 0x36, 0x51, 0xce, 0xf4, 0x3e, 0xa0, 0x0},
	// POKEMON_KNOGGA
	{0x21, 0x76, 0x51, 0xce, 0xf4, 0x3e, 0xa0, 0x0},
	// POKEMON_KICKLEE
	{0xa1, 0x6, 0x13, 0xc6, 0x40, 0x3e, 0xa0, 0x0},
	// POKEMON_NOCKCHAN
	{0xa1, 0x6, 0x13, 0xc6, 0x40, 0x3e, 0xa0, 0x0},
	// POKEMON_SCHLURP
	{0x25, 0x76, 0xf3, 0xef, 0x76, 0x3e, 0xb4, 0x0},
	// POKEMON_SMOGON
	{0x20, 0xe, 0x93, 0xa5, 0x2e, 0x3f, 0x40, 0x0},
	// POKEMON_SMOGMOG
	{0x20, 0x4e, 0x93, 0xa5, 0x2e, 0x3f, 0x40, 0x0},
	// POKEMON_RIHORN
	{0x30, 0x36, 0xd3, 0x8f, 0x76, 0x3e, 0xa0, 0x0},
	// POKEMON_RIZEROS
	{0x31, 0x76, 0xd3, 0xcf, 0x76, 0x3e, 0xb4, 0x0},
	// POKEMON_CHANEIRA
	{0x6d, 0xf6, 0xfb, 0xf7, 0x76, 0x9e, 0xe1, 0x0},
	// POKEMON_ZOBIRIS
	{0xb8, 0x4e, 0x71, 0xce, 0xe6, 0x3e, 0xa6, 0x0},
	// POKEMON_KANGAMA
	{0x75, 0x76, 0xf3, 0xef, 0xf6, 0x3e, 0xb4, 0x0},
	// POKEMON_SEEPER
	{0x64, 0x32, 0x13, 0x84, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_SEEMON
	{0x64, 0x72, 0x13, 0x84, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_QUABBEL
	{0x74, 0x3b, 0x1b, 0xb4, 0x8, 0x1e, 0x10, 0x3},
	// POKEMON_APOQUALLYP
	{0x64, 0x73, 0x1b, 0x94, 0x8, 0x1e, 0x10, 0x3},
	// POKEMON_STERNDU
	{0x64, 0xb2, 0x93, 0x95, 0x1, 0xe, 0x50, 0x3},
	// POKEMON_STARMIE
	{0x64, 0xf2, 0x93, 0x95, 0x1, 0x8e, 0x50, 0x3},
	// POKEMON_TRAUNFUGIL
	{0x6c, 0xfe, 0xbb, 0xb0, 0xb, 0xbf, 0x51, 0x3},
	// POKEMON_SICHLOR
	{0x20, 0x46, 0x13, 0x84, 0x80, 0x7e, 0x84, 0x0},
	// POKEMON_GALAGLADI
	{0x33, 0xc7, 0x3f, 0xc6, 0xc0, 0x1a, 0x44, 0x0},
	// POKEMON_ELEKTEK
	{0x21, 0xc2, 0xd3, 0xd5, 0x2, 0x3e, 0xe0, 0x0},
	// POKEMON_MAGMAR
	{0x21, 0x46, 0x51, 0xd4, 0x24, 0x3e, 0xa0, 0x0},
	// POKEMON_PINSIR
	{0xa1, 0x46, 0x13, 0xce, 0x40, 0x3e, 0xa4, 0x0},
	// POKEMON_TAUROS
	{0x24, 0x76, 0xf3, 0x87, 0x76, 0x1e, 0xb0, 0x0},
	// POKEMON_KARPADOR
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_GARADOS
	{0x74, 0x7a, 0x93, 0x87, 0x34, 0x1f, 0xb0, 0x3},
	// POKEMON_LAPRAS
	{0x74, 0x72, 0xdb, 0x95, 0x2, 0x1e, 0xb0, 0x3},
	// POKEMON_DITTO
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_EVOLI
	{0x20, 0x6, 0x53, 0xac, 0x0, 0x1e, 0x0, 0x0},
	// POKEMON_AQUANA
	{0x74, 0x76, 0x53, 0xac, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_BLITZA
	{0x30, 0x46, 0xd3, 0xad, 0x2, 0x1e, 0x40, 0x0},
	// POKEMON_FLAMARA
	{0x30, 0x46, 0x53, 0xac, 0x24, 0x1e, 0x2, 0x0},
	// POKEMON_PORYGON
	{0x20, 0x76, 0xf3, 0xb5, 0x82, 0x2e, 0x40, 0x0},
	// POKEMON_AMONITAS
	{0x64, 0x32, 0x13, 0x84, 0x50, 0x3e, 0x90, 0x3},
	// POKEMON_AMOROSO
	{0x64, 0x72, 0x13, 0x84, 0x50, 0x3e, 0x90, 0x3},
	// POKEMON_KABUTO
	{0x64, 0x32, 0x17, 0x8c, 0xd0, 0x3e, 0x90, 0x1},
	// POKEMON_KABUTOPS
	{0x64, 0x72, 0x17, 0xcc, 0xd0, 0x3e, 0x94, 0x3},
	// POKEMON_AERODACTYL
	{0x32, 0x4e, 0x53, 0x86, 0xf4, 0x7f, 0xa8, 0x0},
	// POKEMON_RELAXO
	{0x25, 0x76, 0xb3, 0xf7, 0x76, 0x1e, 0x30, 0x0},
	// POKEMON_ARKTOS
	{0x74, 0x76, 0x13, 0x84, 0x91, 0x4e, 0x88, 0x0},
	// POKEMON_ZAPDOS
	{0x30, 0xc6, 0x93, 0x85, 0x92, 0x4e, 0xc8, 0x0},
	// POKEMON_LAVADOS
	{0x30, 0x46, 0x1b, 0x84, 0xb4, 0x4e, 0x8a, 0x0},
	// POKEMON_DRATINI
	{0x64, 0x76, 0xdb, 0x85, 0x26, 0x1e, 0x10, 0x1},
	// POKEMON_DRAGONIR
	{0x64, 0x76, 0xdb, 0x85, 0x26, 0x1e, 0x10, 0x1},
	// POKEMON_DRAGORAN
	{0x77, 0x76, 0xdb, 0xc7, 0xf6, 0x5e, 0xbc, 0x3},
	// POKEMON_MEWTU
	{0xed, 0xfe, 0xfb, 0xf7, 0xf7, 0x8f, 0xe1, 0x0},
	// POKEMON_MEW
	{0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3},
	// POKEMON_ENDIVIE
	{0x20, 0x87, 0x7d, 0x84, 0x1, 0x1e, 0x44, 0x0},
	// POKEMON_LORBLATT
	{0x20, 0x87, 0x7d, 0x84, 0x1, 0x1e, 0xe4, 0x0},
	// POKEMON_MEGANIE
	{0x20, 0xc7, 0x7d, 0x86, 0x1, 0x1e, 0xe4, 0x0},
	// POKEMON_FEURIGEL
	{0x20, 0x6, 0x11, 0x8c, 0xa4, 0x1e, 0x6, 0x0},
	// POKEMON_IGELAVAR
	{0x31, 0x6, 0x11, 0xcc, 0xa4, 0x1e, 0xa6, 0x0},
	// POKEMON_TORNUPTO
	{0x31, 0x46, 0x11, 0xce, 0xa4, 0x1e, 0xa6, 0x0},
	// POKEMON_KARNIMANI
	{0x65, 0x32, 0x53, 0xcc, 0x80, 0x1e, 0x14, 0x3},
	// POKEMON_TYRACROC
	{0x75, 0x32, 0x53, 0xcc, 0x80, 0x1e, 0xb4, 0x3},
	// POKEMON_IMPERGATOR
	{0x77, 0x72, 0x53, 0xce, 0x80, 0x1e, 0xb4, 0x3},
	// POKEMON_IGNIVOR
	{0x25, 0x16, 0xf3, 0xec, 0x6, 0x3e, 0x14, 0x0},
	// POKEMON_RAMOTH
	{0x28, 0x86, 0x3d, 0x94, 0xa4, 0x1e, 0x2, 0x0},
	// POKEMON_GLAZIOLA
	{0x28, 0xc6, 0x3d, 0x94, 0xa4, 0x1e, 0xa, 0x0},
	// POKEMON_RESLADERO
	{0x20, 0x46, 0x13, 0xb4, 0x81, 0x7e, 0x48, 0x0},
	// POKEMON_LEDYBA
	{0xb1, 0xa, 0x59, 0xcc, 0xc0, 0x5f, 0xac, 0x0},
	// POKEMON_LEDIAN
	{0x21, 0xc6, 0x3d, 0xcc, 0x81, 0x3e, 0x40, 0x0},
	// POKEMON_WEBARAK
	{0x20, 0x6, 0x35, 0x9c, 0x8, 0x3e, 0x40, 0x0},
	// POKEMON_ARIADOS
	{0x20, 0x46, 0x35, 0x9c, 0x8, 0x3e, 0x40, 0x0},
	// POKEMON_IKSBAT
	{0x20, 0x4e, 0x17, 0xa4, 0x88, 0x7f, 0x9, 0x0},
	// POKEMON_LAMPI
	{0x64, 0x32, 0x93, 0x85, 0x2, 0x1e, 0x50, 0x3},
	// POKEMON_LANTURN
	{0x64, 0x72, 0x93, 0x85, 0x2, 0x1e, 0x50, 0x3},
	// POKEMON_MAGNEZONE
	{0x20, 0xc6, 0x93, 0x85, 0x3, 0x1e, 0x60, 0x0},
	// POKEMON_TOGEKISS
	{0x25, 0xc6, 0x1b, 0xf4, 0x87, 0x5e, 0x4c, 0x0},
	// POKEMON_FLABEBE
	{0x24, 0x86, 0x3b, 0xbc, 0x27, 0x1e, 0x40, 0x0},
	// POKEMON_TOGEPI
	{0x24, 0x86, 0x3b, 0xb4, 0x27, 0x1e, 0xc0, 0x0},
	// POKEMON_TOGETIC
	{0x25, 0xc6, 0x3b, 0xf4, 0xa7, 0x5e, 0xc8, 0x0},
	// POKEMON_NATU
	{0x28, 0x86, 0x37, 0xb4, 0x81, 0xfe, 0x40, 0x0},
	// POKEMON_XATU
	{0x28, 0xc6, 0x37, 0xb4, 0x81, 0xfe, 0x48, 0x0},
	// POKEMON_VOLTILAMM
	{0x20, 0x82, 0xd3, 0x85, 0x2, 0x1e, 0x40, 0x0},
	// POKEMON_WAATY
	{0x21, 0x82, 0xd3, 0xc5, 0x2, 0x1e, 0xe0, 0x0},
	// POKEMON_AMPHAROS
	{0x21, 0xc2, 0xd3, 0xc5, 0x2, 0x1e, 0xe0, 0x0},
	// POKEMON_BLUBELLA
	{0x20, 0x47, 0x3d, 0x84, 0x8, 0x1e, 0x44, 0x0},
	// POKEMON_MARILL
	{0x65, 0x32, 0x53, 0xcc, 0x0, 0x1e, 0xb0, 0x3},
	// POKEMON_AZUMARILL
	{0x65, 0x72, 0x53, 0xcc, 0x0, 0x1e, 0xb0, 0x3},
	// POKEMON_MOGELBAUM
	{0x29, 0xe, 0x11, 0xce, 0x50, 0x3e, 0xa0, 0x0},
	// POKEMON_CLAVION
	{0x65, 0x72, 0x13, 0xde, 0x0, 0x3e, 0xb0, 0x3},
	// POKEMON_LICHTEL
	{0x28, 0xc6, 0x59, 0x94, 0x3, 0xbf, 0x40, 0x0},
	// POKEMON_LATERNECTO
	{0x28, 0x6, 0x35, 0xb4, 0x24, 0x3e, 0x42, 0x0},
	// POKEMON_SKLELABRA
	{0x28, 0x6, 0x35, 0xb4, 0x24, 0x3e, 0x42, 0x0},
	// POKEMON_GRIFFEL
	{0x28, 0x6, 0x35, 0xb4, 0x24, 0x3e, 0x42, 0x0},
	// POKEMON_SHNEBEDECK
	{0x20, 0x87, 0x3d, 0x84, 0x8, 0x1e, 0x44, 0x0},
	// POKEMON_REXBLISAR
	{0x20, 0xc7, 0x3d, 0x84, 0x8, 0x1e, 0x44, 0x0},
	// POKEMON_AMBIDIFFEL
	{0x20, 0x6, 0x35, 0xb4, 0x80, 0x7e, 0x40, 0x0},
	// POKEMON_FELINO
	{0x64, 0x32, 0x53, 0x8e, 0x18, 0x1e, 0xd0, 0x3},
	// POKEMON_MORLORD
	{0x65, 0x72, 0x53, 0xce, 0x58, 0x1e, 0xf0, 0x3},
	// POKEMON_PSIANA
	{0x28, 0xc6, 0x53, 0xbc, 0x1, 0x9e, 0x44, 0x0},
	// POKEMON_NACHTARA
	{0x20, 0x4e, 0x53, 0xbc, 0x0, 0x1f, 0x45, 0x0},
	// POKEMON_KRAMURX
	{0x28, 0xe, 0x13, 0xa4, 0x80, 0x7f, 0x9, 0x0},
	// POKEMON_LASCHOKING
	{0x6d, 0x76, 0x5b, 0xfe, 0x24, 0x9e, 0xf0, 0x2},
	// POKEMON_KRAMSHEF
	{0x38, 0xe, 0x13, 0xb4, 0x80, 0xff, 0x4d, 0x0},
	// POKEMON_ICOGNITO
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_FROSDEDJE
	{0x20, 0xe, 0x57, 0x96, 0xc, 0x3e, 0x21, 0x0},
	// POKEMON_SKORGRO
	{0x6c, 0xfa, 0x9b, 0xb5, 0x0, 0x9f, 0x40, 0x0},
	// POKEMON_TANNZA
	{0x20, 0x86, 0x35, 0x8e, 0x11, 0x1e, 0xa0, 0x0},
	// POKEMON_FORSTELLKA
	{0x20, 0xc6, 0x35, 0x8e, 0x11, 0x1e, 0xa0, 0x0},
	// POKEMON_ELEVOLTEK
	{0x21, 0xca, 0xd3, 0xdf, 0x46, 0x3f, 0xe4, 0x0},
	// POKEMON_SKORGLA
	{0x20, 0x6, 0x53, 0x8e, 0xd8, 0x7e, 0xa4, 0x0},
	// POKEMON_STAHLOS
	{0x30, 0x4e, 0x51, 0x8e, 0x50, 0x1f, 0xa4, 0x0},
	// POKEMON_SNUBBULL
	{0xb5, 0xe, 0xb3, 0xef, 0x2e, 0x3f, 0xa2, 0x0},
	// POKEMON_GRANBULL
	{0xb5, 0x4e, 0xf3, 0xef, 0x6e, 0x3f, 0xa2, 0x0},
	// POKEMON_MAMUTEL
	{0xe4, 0x3e, 0x53, 0xe6, 0xc0, 0xbf, 0xe5, 0x0},
	// POKEMON_SCHEROX
	{0x6c, 0xb6, 0x1b, 0xbe, 0x51, 0x1e, 0xa0, 0x0},
	// POKEMON_POTTROTT
	{0x20, 0x6, 0x19, 0x8e, 0x58, 0x1e, 0xe0, 0x0},
	// POKEMON_SKARABORN
	{0xa1, 0x46, 0x13, 0xce, 0x40, 0x3e, 0xa4, 0x0},
	// POKEMON_KRYPPUK
	{0x28, 0x4e, 0x1b, 0xb4, 0x41, 0x3f, 0x61, 0x0},
	// POKEMON_TEDDIURSA
	{0xb1, 0xe, 0x13, 0xce, 0x80, 0x3f, 0xa4, 0x0},
	// POKEMON_URSARING
	{0xb1, 0x4e, 0x13, 0xce, 0xc0, 0x3f, 0xa4, 0x0},
	// POKEMON_SCHNECKMAG
	{0x20, 0x86, 0x11, 0x84, 0x25, 0x1e, 0x82, 0x0},
	// POKEMON_MAGCARGO
	{0x20, 0xc6, 0x11, 0x86, 0x75, 0x1e, 0xa2, 0x0},
	// POKEMON_QUIEKEL
	{0x70, 0xb2, 0x13, 0x8e, 0x51, 0x1e, 0xa0, 0x0},
	// POKEMON_KEIFEL
	{0x70, 0xf2, 0x13, 0x8e, 0x51, 0x1e, 0xa0, 0x0},
	// POKEMON_CORASONN
	{0x6c, 0xb6, 0x1b, 0xbe, 0x51, 0x1e, 0xa0, 0x0},
	// POKEMON_REMORAID
	{0x24, 0x76, 0x13, 0x94, 0x24, 0x3e, 0x10, 0x3},
	// POKEMON_OCTILLERY
	{0x24, 0x77, 0x13, 0x94, 0x2c, 0x3e, 0x10, 0x3},
	// POKEMON_BOTOGEL
	{0x65, 0x32, 0x13, 0x84, 0x80, 0x3e, 0x8, 0x0},
	// POKEMON_SCHLURPLEK
	{0x64, 0x32, 0x13, 0x86, 0x80, 0x1e, 0x10, 0x3},
	// POKEMON_PANZAERON
	{0x30, 0xe, 0x11, 0x84, 0x90, 0x7f, 0x8c, 0x0},
	// POKEMON_HUNDUSTER
	{0x30, 0xe, 0x71, 0xa4, 0x2c, 0x3f, 0x83, 0x0},
	// POKEMON_HUNDEMON
	{0x30, 0x4e, 0x71, 0xa4, 0x2c, 0x3f, 0xa3, 0x0},
	// POKEMON_SEEDRAKING
	{0x64, 0x72, 0x13, 0x84, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_PHANPY
	{0x30, 0x6, 0x51, 0x86, 0x50, 0x1e, 0xa0, 0x0},
	// POKEMON_DONPHAN
	{0x30, 0x46, 0x51, 0x86, 0x50, 0x1e, 0xa0, 0x0},
	// POKEMON_PORYGON2
	{0x20, 0x76, 0xf3, 0xb5, 0x82, 0x2e, 0x40, 0x0},
	// POKEMON_VOLUMINAS
	{0x38, 0x86, 0xf3, 0xb7, 0x3, 0xbe, 0x40, 0x0},
	// POKEMON_TRAUNMAGIL
	{0xb3, 0x4f, 0x64, 0xce, 0xc1, 0x3e, 0x24, 0x0},
	// POKEMON_RABAUZ
	{0xa0, 0x6, 0x13, 0xc6, 0x0, 0x3e, 0xa0, 0x0},
	// POKEMON_KAPOERA
	{0xa0, 0x6, 0x13, 0xce, 0x10, 0x3e, 0xa0, 0x0},
	// POKEMON_KUSSILLA
	{0x6c, 0xb2, 0x13, 0xb4, 0x1, 0xbe, 0x40, 0x0},
	// POKEMON_ELEKID
	{0x21, 0x82, 0x93, 0xd5, 0x2, 0x3e, 0xc0, 0x0},
	// POKEMON_MAGBY
	{0x21, 0x6, 0x51, 0xd4, 0x24, 0x3e, 0x80, 0x0},
	// POKEMON_MILTANK
	{0x25, 0x76, 0xf3, 0xe7, 0x52, 0x1e, 0xb0, 0x0},
	// POKEMON_HEITEIRA
	{0x6d, 0xf6, 0xfb, 0xf7, 0x76, 0x9e, 0xe1, 0x0},
	// POKEMON_RAIKOU
	{0x38, 0x46, 0xd3, 0x8d, 0x13, 0xe, 0xe4, 0x0},
	// POKEMON_ENTEI
	{0x38, 0x46, 0x73, 0x8c, 0x35, 0xe, 0xe4, 0x0},
	// POKEMON_SUICUNE
	{0x7c, 0x76, 0x53, 0x8c, 0x11, 0xe, 0x94, 0x3},
	// POKEMON_LARVITAR
	{0x20, 0x4e, 0x13, 0xce, 0x10, 0x1f, 0x80, 0x0},
	// POKEMON_PUPITAR
	{0x20, 0x4e, 0x13, 0xce, 0x10, 0x1f, 0x80, 0x0},
	// POKEMON_DESPOTAR
	{0x37, 0x7e, 0xd3, 0xcf, 0xf6, 0x1f, 0xb4, 0x0},
	// POKEMON_LUGIA
	{0x7c, 0xf6, 0xdf, 0xb7, 0x93, 0xce, 0xb8, 0x3},
	// POKEMON_HO_OH
	{0x38, 0xc6, 0xbf, 0xb7, 0xb7, 0x4e, 0xea, 0x0},
	// POKEMON_CELEBI
	{0x2c, 0xc6, 0x3f, 0xb4, 0x93, 0x8e, 0x44, 0x0},
	// POKEMON_BISAFLORM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_GLURAKM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_AQUANAM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_BLITZAM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_FLAMARM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_DURENGARDA
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_IN
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_GAME
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_TURTOKM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_AMPHARAOSM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_GENGARM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_BIBORM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ALTARIAM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_GEOWAZM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_SENGOM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_VIPITISM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ZOBIRISM
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_10d
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_10e
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_10f
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_110
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_111
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_112
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_113
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_114
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_LOCKSCHAL
	{0x21, 0x7, 0x7d, 0xcc, 0xc0, 0x1e, 0xe4, 0x0},
	// POKEMON_STICHSCHAL
	{0xb3, 0xf, 0x3d, 0xce, 0xc0, 0x1e, 0xe4, 0x0},
	// POKEMON_STAHLSTICH
	{0x33, 0x47, 0x3d, 0xce, 0xc0, 0x1e, 0xe4, 0x0},
	// POKEMON_WELUNO
	{0xb0, 0x7, 0x3d, 0xce, 0xe4, 0x1e, 0xa2, 0x0},
	// POKEMON_ORTHODOS
	{0x20, 0x6, 0x11, 0xcc, 0xe4, 0x1e, 0xa2, 0x0},
	// POKEMON_ZERBERTRES
	{0x30, 0x46, 0x11, 0xce, 0xe4, 0x1e, 0xa2, 0x0},
	// POKEMON_SEEKID
	{0x64, 0x32, 0x53, 0x8c, 0x40, 0x1e, 0xb0, 0x3},
	// POKEMON_SEESKULL
	{0x64, 0x32, 0x53, 0x8e, 0x40, 0x1e, 0xb0, 0x3},
	// POKEMON_SKULLYDRA
	{0x75, 0x73, 0xf3, 0xdf, 0x66, 0x1e, 0xf0, 0x3},
	// POKEMON_FIFFYEN
	{0x30, 0xe, 0x53, 0xac, 0x0, 0x3f, 0x81, 0x0},
	// POKEMON_MAGNAYEN
	{0x30, 0x4e, 0x53, 0xac, 0x0, 0x3f, 0xa1, 0x0},
	// POKEMON_ZIGZACHS
	{0x24, 0x36, 0xd3, 0xad, 0x2, 0x3e, 0x94, 0x0},
	// POKEMON_GERADAKS
	{0x34, 0x76, 0xd3, 0xad, 0x2, 0x3e, 0xb4, 0x0},
	// POKEMON_WAUMPEL
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_SCHALOKO
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_PAPINELLA
	{0x20, 0x46, 0x3d, 0xb4, 0x80, 0x3e, 0x40, 0x0},
	// POKEMON_PANEKON
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_PUDOX
	{0x20, 0xc6, 0x35, 0xb4, 0x88, 0x3e, 0x40, 0x0},
	// POKEMON_LOTURZEL
	{0x64, 0x37, 0x37, 0x84, 0x0, 0x3e, 0x50, 0x0},
	// POKEMON_LOMBRERO
	{0x64, 0x37, 0x37, 0xc4, 0x0, 0x3e, 0xf0, 0x3},
	// POKEMON_KAPPALORES
	{0x65, 0x77, 0x37, 0xc4, 0x0, 0x3e, 0xf0, 0x3},
	// POKEMON_SAMURZEL
	{0x20, 0x7, 0x35, 0xac, 0x0, 0x1e, 0xc0, 0x0},
	// POKEMON_BLANAS
	{0x20, 0x47, 0x35, 0xec, 0x40, 0x3f, 0xe4, 0x0},
	// POKEMON_TENGULIST
	{0x20, 0x47, 0x35, 0xec, 0xc0, 0x3f, 0xe4, 0x0},
	// POKEMON_NINCADA
	{0x20, 0x6, 0x35, 0xac, 0x90, 0xe, 0x44, 0x0},
	// POKEMON_NINJASK
	{0x20, 0x46, 0x35, 0xac, 0x90, 0x3e, 0x44, 0x0},
	// POKEMON_NINJATOM
	{0x20, 0x46, 0x35, 0xac, 0x90, 0x2e, 0x44, 0x0},
	// POKEMON_SCHWALBINI
	{0x20, 0x6, 0x13, 0x84, 0x80, 0x7e, 0x8, 0x0},
	// POKEMON_SCHWALBOSS
	{0x20, 0x46, 0x13, 0x84, 0x80, 0x7e, 0x8, 0x0},
	// POKEMON_KNILZ
	{0x20, 0x7, 0x3d, 0x84, 0x8, 0x1e, 0x41, 0x0},
	// POKEMON_KAPILZ
	{0xa1, 0x47, 0x7d, 0xc4, 0x8, 0x1e, 0xe5, 0x0},
	// POKEMON_PANDIR
	{0x2d, 0x6, 0x1b, 0xfc, 0x42, 0xbe, 0xe1, 0x0},
	// POKEMON_WINGULL
	{0x64, 0x32, 0x13, 0x84, 0x82, 0x7e, 0x8, 0x0},
	// POKEMON_PELIPPER
	{0x64, 0x72, 0x13, 0x84, 0x82, 0x7e, 0x18, 0x0},
	// POKEMON_GEHWEIHER
	{0x24, 0x36, 0x37, 0xa4, 0x0, 0x3e, 0x40, 0x0},
	// POKEMON_MASKEREGEN
	{0x24, 0x76, 0x37, 0xa4, 0x80, 0x3e, 0x40, 0x0},
	// POKEMON_WAILMER
	{0x74, 0x32, 0x13, 0x86, 0x40, 0x1e, 0xb0, 0x3},
	// POKEMON_WAILORD
	{0x74, 0x72, 0x13, 0x86, 0x40, 0x1e, 0xb0, 0x3},
	// POKEMON_ENECO
	{0x2c, 0x36, 0xfb, 0xad, 0x2, 0x1e, 0x48, 0x0},
	// POKEMON_ENEKORO
	{0x2c, 0x76, 0xfb, 0xad, 0x2, 0x1e, 0xe0, 0x0},
	// POKEMON_KECLEON
	{0x25, 0x36, 0xf3, 0xed, 0xe6, 0xbe, 0xe5, 0x0},
	// POKEMON_PUPPANCE
	{0x20, 0x96, 0x33, 0xbe, 0x51, 0x8e, 0x40, 0x0},
	// POKEMON_LEPUMENTAS
	{0x20, 0xd6, 0x33, 0xbe, 0x51, 0x8e, 0xe0, 0x0},
	// POKEMON_NASGNET
	{0x20, 0xe, 0x91, 0x87, 0x52, 0x1f, 0xa0, 0x0},
	// POKEMON_MAGBRANT
	{0x20, 0x4e, 0xb1, 0xd6, 0x64, 0x1f, 0xa2, 0x0},
	// POKEMON_ZWIRRFINST
	{0x29, 0x7e, 0x13, 0xf6, 0x40, 0x3f, 0x61, 0x0},
	// POKEMON_SCHMERBE
	{0x64, 0x32, 0x13, 0x86, 0x50, 0x1e, 0x10, 0x3},
	// POKEMON_WELSAR
	{0x64, 0x72, 0x13, 0x86, 0x50, 0x1e, 0xb0, 0x3},
	// POKEMON_LIEBISKUS
	{0x64, 0x32, 0x1b, 0x84, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_KREBSCORPS
	{0x64, 0x3a, 0x13, 0xcc, 0xc8, 0x1e, 0xb4, 0x1},
	// POKEMON_KREBUTACK
	{0x64, 0x7a, 0x13, 0xcc, 0xc8, 0x1e, 0xb4, 0x3},
	// POKEMON_BARSCHWA
	{0x64, 0x32, 0x13, 0x84, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_MILOTIC
	{0x64, 0x72, 0x5b, 0x84, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_KANIVANHA
	{0x64, 0x3a, 0x13, 0x84, 0x0, 0x3f, 0x10, 0x3},
	// POKEMON_TOHAIDO
	{0x74, 0x7a, 0x13, 0x86, 0x40, 0x3f, 0xb0, 0x3},
	// POKEMON_KNACKLION
	{0x20, 0x46, 0x35, 0x8e, 0x50, 0x1e, 0xa0, 0x0},
	// POKEMON_VIBRAVA
	{0x20, 0x46, 0x35, 0x8e, 0x50, 0x5e, 0xa8, 0x0},
	// POKEMON_LIBELLDRA
	{0x22, 0x46, 0x75, 0x8e, 0x74, 0x5e, 0xa8, 0x0},
	// POKEMON_RIOLU
	{0xb0, 0x6, 0x13, 0xce, 0x40, 0x1e, 0xa0, 0x0},
	// POKEMON_LUCARIO
	{0xb3, 0x46, 0x53, 0xce, 0xc6, 0x1e, 0xa4, 0x0},
	// POKEMON_FRIZELBLIZ
	{0x30, 0x2, 0xd3, 0x85, 0x2, 0x3e, 0x60, 0x0},
	// POKEMON_VOLTENSO
	{0x30, 0x42, 0xd3, 0x85, 0x2, 0x3e, 0x60, 0x0},
	// POKEMON_CAMAUB
	{0x20, 0x6, 0x11, 0x8e, 0x74, 0x1e, 0xa2, 0x0},
	// POKEMON_CAMERUPT
	{0x30, 0x46, 0x11, 0x8e, 0x74, 0x1e, 0xa2, 0x0},
	// POKEMON_SEEMOPS
	{0x64, 0x32, 0x53, 0x86, 0x40, 0x1e, 0xb0, 0x3},
	// POKEMON_SEEJONG
	{0x74, 0x32, 0x53, 0x86, 0x40, 0x1e, 0xb0, 0x3},
	// POKEMON_WALRAISA
	{0x74, 0x72, 0x53, 0x86, 0x40, 0x1e, 0xb0, 0x3},
	// POKEMON_TUSKA
	{0x21, 0x7, 0x35, 0x84, 0x10, 0x1e, 0x44, 0x0},
	// POKEMON_NOKTUSKA
	{0x21, 0x47, 0x35, 0x84, 0x10, 0x1e, 0x64, 0x0},
	// POKEMON_SCHNEPPKE
	{0x64, 0xb2, 0x1b, 0xa4, 0x0, 0x1e, 0x40, 0x0},
	// POKEMON_FIRNONTOR
	{0x64, 0xfa, 0x1b, 0xa6, 0x0, 0x1f, 0x40, 0x0},
	// POKEMON_LUNASTEIN
	{0x28, 0xd2, 0x1b, 0xb6, 0x51, 0x8e, 0x40, 0x0},
	// POKEMON_SONNFEL
	{0x28, 0xc6, 0x39, 0xb6, 0x75, 0x8e, 0x42, 0x0},
	// POKEMON_AZURILL
	{0x64, 0x32, 0x53, 0x84, 0x0, 0x1e, 0x10, 0x1},
	// POKEMON_SPOINK
	{0x28, 0x8e, 0x53, 0xb4, 0x3, 0xbf, 0x41, 0x0},
	// POKEMON_GROINK
	{0x29, 0xce, 0x53, 0xb4, 0x3, 0xbf, 0x41, 0x0},
	// POKEMON_PLUSLE
	{0x20, 0x82, 0xd3, 0x85, 0x2, 0x1e, 0x40, 0x0},
	// POKEMON_MINUN
	{0x20, 0x82, 0xd3, 0x85, 0x2, 0x1e, 0x40, 0x0},
	// POKEMON_FLUNKIFER
	{0x21, 0x5e, 0x33, 0xc4, 0x7c, 0x1f, 0xa0, 0x0},
	// POKEMON_MEDITIE
	{0xa9, 0x86, 0x13, 0xf4, 0x41, 0x1e, 0xe0, 0x0},
	// POKEMON_MEDITALIS
	{0xa9, 0xc6, 0x13, 0xf4, 0x41, 0x1e, 0xe0, 0x0},
	// POKEMON_WABLU
	{0x20, 0x16, 0x3b, 0x84, 0x80, 0x7e, 0x8, 0x0},
	// POKEMON_ALTARIA
	{0x32, 0x56, 0x7b, 0x86, 0xa4, 0x7e, 0x88, 0x0},
	// POKEMON_ISSO
	{0x32, 0x54, 0xfb, 0x87, 0xa6, 0x7e, 0xc8, 0x0},
	// POKEMON_ZWIRRLICHT
	{0x28, 0x3e, 0x13, 0xb4, 0x0, 0xbf, 0x41, 0x0},
	// POKEMON_ZWIRRKLOP
	{0x29, 0x7e, 0x13, 0xb6, 0x40, 0xbf, 0xe1, 0x0},
	// POKEMON_ROSELIA
	{0x20, 0x7, 0x35, 0xa4, 0x8, 0x1e, 0x44, 0x0},
	// POKEMON_BUMMELZ
	{0xa5, 0x36, 0xb3, 0xe5, 0xa6, 0x1e, 0xa4, 0x0},
	// POKEMON_MUNTIER
	{0xb5, 0x3e, 0xb3, 0xe7, 0xa6, 0x1e, 0xa4, 0x0},
	// POKEMON_LETARKING
	{0xb5, 0x7e, 0xb3, 0xe7, 0xa6, 0x1e, 0xa4, 0x0},
	// POKEMON_SCHLUPPUCK
	{0x24, 0x17, 0x37, 0xa4, 0xa, 0x1e, 0xa1, 0x0},
	// POKEMON_SCHLUKWECH
	{0x24, 0x57, 0x37, 0xa4, 0xa, 0x1e, 0xa1, 0x0},
	// POKEMON_TROPIUS
	{0x30, 0x47, 0x3d, 0x86, 0x80, 0x5e, 0xec, 0x0},
	// POKEMON_KAUMALAT
	{0x32, 0x2, 0x51, 0x8e, 0xf4, 0x1e, 0xa4, 0x0},
	// POKEMON_KNARKSEL
	{0x32, 0x2, 0x51, 0x8e, 0xf6, 0x1f, 0xa4, 0x0},
	// POKEMON_KNAKRACK
	{0x32, 0x42, 0x51, 0x8e, 0xf4, 0x1f, 0xa4, 0x0},
	// POKEMON_PERLU
	{0x64, 0x32, 0x13, 0x84, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_AALABYSS
	{0x64, 0x72, 0x13, 0x84, 0x40, 0x1e, 0x11, 0x3},
	// POKEMON_SAGANABYSS
	{0x64, 0x72, 0x1b, 0xb4, 0x0, 0x1e, 0x10, 0x3},
	// POKEMON_ABSOL
	{0x6c, 0x7e, 0xd3, 0xa5, 0xb6, 0x3f, 0xe5, 0x0},
	// POKEMON_SHUPPET
	{0x28, 0xe, 0x93, 0xb5, 0x2, 0xbf, 0x41, 0x0},
	// POKEMON_BANETTE
	{0x28, 0x4e, 0x93, 0xb5, 0x2, 0xbf, 0x41, 0x0},
	// POKEMON_VIPITIS
	{0x20, 0xe, 0x57, 0x8e, 0xc, 0x3e, 0xa1, 0x0},
	// POKEMON_SENGO
	{0x35, 0x3e, 0xf7, 0xed, 0xa6, 0x3e, 0xa0, 0x0},
	// POKEMON_RELICANTH
	{0x6c, 0x72, 0x1b, 0x86, 0x50, 0x1e, 0x90, 0x3},
	// POKEMON_STOLLUNIOR
	{0x34, 0x6, 0x53, 0x8e, 0xd2, 0x1e, 0xa4, 0x0},
	// POKEMON_STOLLRAK
	{0x34, 0x6, 0x53, 0x8e, 0xd2, 0x1e, 0xa4, 0x0},
	// POKEMON_STOLLOSS
	{0x37, 0x7e, 0xf3, 0xcf, 0xf6, 0x1e, 0xb4, 0x0},
	// POKEMON_FORMEO
	{0x64, 0x36, 0xb3, 0xa5, 0x36, 0x3e, 0x40, 0x0},
	// POKEMON_VOLBEAT
	{0x25, 0x86, 0xb7, 0xe5, 0x82, 0x3e, 0x40, 0x0},
	// POKEMON_ILLUMISE
	{0x25, 0x86, 0xb7, 0xe5, 0x82, 0x3e, 0x40, 0x0},
	// POKEMON_LILIEP
	{0x20, 0x7, 0x35, 0x84, 0x18, 0x1e, 0x0, 0x0},
	// POKEMON_WIELIE
	{0x20, 0x47, 0x35, 0x86, 0x58, 0x1e, 0xa0, 0x0},
	// POKEMON_ANORITH
	{0x24, 0x6, 0x11, 0xcc, 0xd0, 0x1e, 0x84, 0x0},
	// POKEMON_ARMALDO
	{0x24, 0x46, 0x51, 0xce, 0xd0, 0x1e, 0xa4, 0x0},
	// POKEMON_TRASLA
	{0x28, 0x8e, 0x9b, 0xb4, 0x3, 0xbf, 0x41, 0x0},
	// POKEMON_KIRLIA
	{0x28, 0x8e, 0x9b, 0xb4, 0x3, 0xbf, 0x41, 0x0},
	// POKEMON_GUARDEVOIR
	{0x28, 0xce, 0x9b, 0xb4, 0x3, 0xbf, 0x41, 0x0},
	// POKEMON_KINDWURM
	{0x32, 0x6, 0x13, 0xc4, 0xe4, 0x1e, 0xa4, 0x0},
	// POKEMON_DRASCHEL
	{0x32, 0x6, 0x13, 0xc4, 0xe4, 0x1e, 0xa4, 0x0},
	// POKEMON_BRUTALANDA
	{0x32, 0x46, 0x53, 0xc6, 0xe4, 0x5e, 0xac, 0x0},
	// POKEMON_TANHEL
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_METANG
	{0x20, 0xc6, 0x13, 0xf6, 0xd9, 0xe, 0xe4, 0x0},
	// POKEMON_METAGROSS
	{0x20, 0xc6, 0x13, 0xf6, 0xd9, 0xe, 0xe4, 0x0},
	// POKEMON_REGIROCK
	{0x21, 0x46, 0x99, 0xcf, 0x52, 0xe, 0xa0, 0x0},
	// POKEMON_REGICE
	{0x61, 0x72, 0x9b, 0xc7, 0x2, 0xe, 0xa0, 0x0},
	// POKEMON_REGISTEEL
	{0x21, 0x46, 0x9b, 0xc7, 0xd2, 0xe, 0xa0, 0x0},
	// POKEMON_KYOGRE
	{0x7c, 0x72, 0x9b, 0xc7, 0x42, 0xe, 0xb0, 0x3},
	// POKEMON_GROUDON
	{0xb2, 0x46, 0xf9, 0xcf, 0xf6, 0xe, 0xa6, 0x0},
	// POKEMON_RAYQUAZA
	{0xb6, 0x76, 0xf3, 0xc7, 0xb6, 0xe, 0xba, 0x3},
	// POKEMON_LATIAS
	{0x3e, 0xd6, 0xbb, 0xb7, 0x93, 0x5e, 0x5c, 0x3},
	// POKEMON_LATIOS
	{0x3e, 0xd6, 0xbb, 0xb7, 0x93, 0x5e, 0x5c, 0x3},
	// POKEMON_JIRACHI
	{0x2c, 0xc6, 0x9b, 0xb5, 0x93, 0x8e, 0x40, 0x0},
	// POKEMON_DEOXYS
	{0x2d, 0xde, 0xbb, 0xf5, 0xc3, 0x8f, 0xe5, 0x0},
	// POKEMON_PALIMPALIM
	{0x28, 0x8e, 0x1b, 0xb4, 0x3, 0x9f, 0x41, 0x0},
	// POKEMON_EGG
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_B
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_C
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_D
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_E
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_F
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_G
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_H
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_I
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_J
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_K
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_L
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_M
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_N
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_O
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_P
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_Q
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_R
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_S
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_T
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_U
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_V
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_W
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_X
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_Y
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_Z
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
	// POKEMON_ICOGNITO_EXCLAMATION
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
        // POKEMON_ICOGNITO_QUESTION
	{0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
        // POKEMON_TEST
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},
};