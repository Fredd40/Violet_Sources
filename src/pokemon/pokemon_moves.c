#include "types.h"
#include "pokemon.h"

pokemon_move pmoves_test[] = {
    {4, 1},
    {5, 1},
    {6, 6},
    {511, 127},
};

pokemon_move *pokemon_moves[POKEMON_CNT] = {
        // POKEMON_POKEMON_0
	(pokemon_move*) 0x82573b8,
	// POKEMON_BISASAM
	(pokemon_move*) 0x82573b8,
	// POKEMON_BISAKNOSP
	(pokemon_move*) 0x82573d0,
	// POKEMON_BISAFLOR
	(pokemon_move*) 0x82573ec,
	// POKEMON_GLUMANDA
	(pokemon_move*) 0x825740a,
	// POKEMON_GLUTEXO
	(pokemon_move*) 0x8257420,
	// POKEMON_GLURAK
	(pokemon_move*) 0x87436a0,
	// POKEMON_SCHIGGY
	(pokemon_move*) 0x8257456,
	// POKEMON_SCHILLOK
	(pokemon_move*) 0x825746e,
	// POKEMON_TURTOK
	(pokemon_move*) 0x8743874,
	// POKEMON_DARTIRI
	(pokemon_move*) 0x8745390,
	// POKEMON_DARTIGNIS
	(pokemon_move*) 0x87461cc,
	// POKEMON_FIARO
	(pokemon_move*) 0x874c674,
	// POKEMON_HORNLIU
	(pokemon_move*) 0x82574cc,
	// POKEMON_KOKUNA
	(pokemon_move*) 0x82574d2,
	// POKEMON_BIBOR
	(pokemon_move*) 0x8744e4c,
	// POKEMON_STARALILI
	(pokemon_move*) 0x82574ec,
	// POKEMON_STARAVIA
	(pokemon_move*) 0x8b10034,
	// POKEMON_STARAPTOR
	(pokemon_move*) 0x8b10050,
	// POKEMON_BRONZEL
	(pokemon_move*) 0x87470d8,
	// POKEMON_BRONZONG
	(pokemon_move*) 0x87470d8,
	// POKEMON_MAEHIKEL
	(pokemon_move*) 0x874d618,
	// POKEMON_CHEVRUMM
	(pokemon_move*) 0x874e384,
	// POKEMON_PARAGONI
	(pokemon_move*) 0x874cb28,
	// POKEMON_TROMBORK
	(pokemon_move*) 0x874cb28,
	// POKEMON_PIKACHU
	(pokemon_move*) 0x82575b6,
	// POKEMON_RAICHU
	(pokemon_move*) 0x82575ce,
	// POKEMON_SANDAN
	(pokemon_move*) 0x82575d8,
	// POKEMON_SANDAMER
	(pokemon_move*) 0x82575ec,
	// POKEMON_NIDORANW
	(pokemon_move*) 0x8257604,
	// POKEMON_NIDORINA
	(pokemon_move*) 0x825761a,
	// POKEMON_NIDOQUEEN
	(pokemon_move*) 0x8257630,
	// POKEMON_NIDORANM
	(pokemon_move*) 0x825763e,
	// POKEMON_NIDORINO
	(pokemon_move*) 0x8257654,
	// POKEMON_NIDOKING
	(pokemon_move*) 0x825766a,
	// POKEMON_FLOETTE
	(pokemon_move*) 0x874d618,
	// POKEMON_FLORGES
	(pokemon_move*) 0x87436e4,
	// POKEMON_VULPIX
	(pokemon_move*) 0x825769e,
	// POKEMON_VULNONA
	(pokemon_move*) 0x82576b6,
	// POKEMON_PUMMELUFF
	(pokemon_move*) 0x82576c2,
	// POKEMON_KNUDDELUFF
	(pokemon_move*) 0x82576da,
	// POKEMON_ZUBAT
	(pokemon_move*) 0x82576e4,
	// POKEMON_GOLBAT
	(pokemon_move*) 0x82576fa,
	// POKEMON_MYRAPLA
	(pokemon_move*) 0x8257716,
	// POKEMON_DUFLOR
	(pokemon_move*) 0x8257728,
	// POKEMON_GIFLOR
	(pokemon_move*) 0x825773e,
	// POKEMON_FOLIPURBA
	(pokemon_move*) 0x8756044,
	// POKEMON_FEELINARA
	(pokemon_move*) 0x825775e,
	// POKEMON_WATTZAPF
	(pokemon_move*) 0x87575d8,
	// POKEMON_VOLTULA
	(pokemon_move*) 0x87575d8,
	// POKEMON_DIGDA
	(pokemon_move*) 0x82577ac,
	// POKEMON_DIGDRI
	(pokemon_move*) 0x82577c2,
	// POKEMON_KASTADUR
	(pokemon_move*) 0x874e3ac,
	// POKEMON_TENTANTEL
	(pokemon_move*) 0x874e3ac,
	// POKEMON_ENTON
	(pokemon_move*) 0x825780c,
	// POKEMON_ENTORON
	(pokemon_move*) 0x8257820,
	// POKEMON_MENKI
	(pokemon_move*) 0x91806a0,
	// POKEMON_RASAFF
	(pokemon_move*) 0x91806c0,
	// POKEMON_FUKANO
	(pokemon_move*) 0x91805e0,
	// POKEMON_ARKANI
	(pokemon_move*) 0x8257884,
	// POKEMON_GRAMOKLES
	(pokemon_move*) 0x8772d8c,
	// POKEMON_DUOKLES
	(pokemon_move*) 0x8772d8c,
	// POKEMON_DURENGARD
	(pokemon_move*) 0x8768460,
	// POKEMON_ABRA
	(pokemon_move*) 0x82578c6,
	// POKEMON_KADABRA
	(pokemon_move*) 0x82578ca,
	// POKEMON_SIMSALA
	(pokemon_move*) 0x82578e4,
	// POKEMON_MACHOLLO
	(pokemon_move*) 0x82578fe,
	// POKEMON_MASCHOCK
	(pokemon_move*) 0x8257918,
	// POKEMON_MACHOMEI
	(pokemon_move*) 0x8257934,
	// POKEMON_KNOFENSA
	(pokemon_move*) 0x8257950,
	// POKEMON_ULTRIGARIA
	(pokemon_move*) 0x8257966,
	// POKEMON_SARZENIA
	(pokemon_move*) 0x8257980,
	// POKEMON_TENTACHA
	(pokemon_move*) 0x8257990,
	// POKEMON_TENTOXA
	(pokemon_move*) 0x82579a4,
	// POKEMON_KLEINSTEIN
	(pokemon_move*) 0x82579bc,
	// POKEMON_GEOROK
	(pokemon_move*) 0x82579d4,
	// POKEMON_GEOWAZ
	(pokemon_move*) 0x8745340,
	// POKEMON_PONITA
	(pokemon_move*) 0x9180600,
	// POKEMON_GALLOPA
	(pokemon_move*) 0x9180620,
	// POKEMON_FLEGMON
	(pokemon_move*) 0x8257a40,
	// POKEMON_LAHMUS
	(pokemon_move*) 0x8257a58,
	// POKEMON_MAGNETILO
	(pokemon_move*) 0x8257a74,
	// POKEMON_MAGNETON
	(pokemon_move*) 0x8257a8c,
	// POKEMON_PORENTA
	(pokemon_move*) 0x8257aa8,
	// POKEMON_DODU
	(pokemon_move*) 0x8257abe,
	// POKEMON_DODRI
	(pokemon_move*) 0x8257ad2,
	// POKEMON_JURBO
	(pokemon_move*) 0x9180700,
	// POKEMON_JUGONG
	(pokemon_move*) 0x9180720,
	// POKEMON_SLEIMA
	(pokemon_move*) 0x8257b18,
	// POKEMON_SLEIMOK
	(pokemon_move*) 0x8257b2e,
	// POKEMON_MUSCHAS
	(pokemon_move*) 0x8257b46,
	// POKEMON_AUSTOS
	(pokemon_move*) 0x8257b5a,
	// POKEMON_NEBULAK
	(pokemon_move*) 0x8257b68,
	// POKEMON_ALPOLLO
	(pokemon_move*) 0x8257b80,
	// POKEMON_GENGAR
	(pokemon_move*) 0x8744dd0,
	// POKEMON_ONIX
	(pokemon_move*) 0x8257bb8,
	// POKEMON_TRAUMATO
	(pokemon_move*) 0x8257bd2,
	// POKEMON_HYPNO
	(pokemon_move*) 0x8257bea,
	// POKEMON_KRABBY
	(pokemon_move*) 0x8257c08,
	// POKEMON_KINGLER
	(pokemon_move*) 0x8257c1e,
	// POKEMON_VOLTOBAL
	(pokemon_move*) 0x8257c3c,
	// POKEMON_LEKTROBAL
	(pokemon_move*) 0x8257c54,
	// POKEMON_OWEI
	(pokemon_move*) 0x8257c70,
	// POKEMON_KOKOWEI
	(pokemon_move*) 0x9180640,
	// POKEMON_TRAGOSSO
	(pokemon_move*) 0x8257c92,
	// POKEMON_KNOGGA
	(pokemon_move*) 0x8257cac,
	// POKEMON_KICKLEE
	(pokemon_move*) 0x91806e0,
	// POKEMON_NOCKCHAN
	(pokemon_move*) 0x9180540,
	// POKEMON_SCHLURP
	(pokemon_move*) 0x8257d02,
	// POKEMON_SMOGON
	(pokemon_move*) 0x8257d18,
	// POKEMON_SMOGMOG
	(pokemon_move*) 0x8257d2e,
	// POKEMON_RIHORN
	(pokemon_move*) 0x8257d48,
	// POKEMON_RIZEROS
	(pokemon_move*) 0x8257d5e,
	// POKEMON_CHANEIRA
	(pokemon_move*) 0x8257d78,
	// POKEMON_ZOBIRIS
	(pokemon_move*) 0x8745368,
	// POKEMON_KANGAMA
	(pokemon_move*) 0x8257dac,
	// POKEMON_SEEPER
	(pokemon_move*) 0x8257dc2,
	// POKEMON_SEEMON
	(pokemon_move*) 0x8257dd4,
	// POKEMON_QUABBEL
	(pokemon_move*) 0x8257dec,
	// POKEMON_APOQUALLYP
	(pokemon_move*) 0x8b10000,
	// POKEMON_STERNDU
	(pokemon_move*) 0x8257e1e,
	// POKEMON_STARMIE
	(pokemon_move*) 0x8257e38,
	// POKEMON_TRAUNFUGIL
	(pokemon_move*) 0x87438a0,
	// POKEMON_SICHLOR
	(pokemon_move*) 0x8257e66,
	// POKEMON_GALAGLADI
	(pokemon_move*) 0x8989000,
	// POKEMON_ELEKTEK
	(pokemon_move*) 0x8257e9a,
	// POKEMON_MAGMAR
	(pokemon_move*) 0x8257eae,
	// POKEMON_PINSIR
	(pokemon_move*) 0x8257ec8,
	// POKEMON_TAUROS
	(pokemon_move*) 0x8257ede,
	// POKEMON_KARPADOR
	(pokemon_move*) 0x8257ef4,
	// POKEMON_GARADOS
	(pokemon_move*) 0x8257efc,
	// POKEMON_LAPRAS
	(pokemon_move*) 0x8257f10,
	// POKEMON_DITTO
	(pokemon_move*) 0x8257f2a,
	// POKEMON_EVOLI
	(pokemon_move*) 0x8257f2e,
	// POKEMON_AQUANA
	(pokemon_move*) 0x8744cd8,
	// POKEMON_BLITZA
	(pokemon_move*) 0x8743be8,
	// POKEMON_FLAMARA
	(pokemon_move*) 0x8744614,
	// POKEMON_PORYGON
	(pokemon_move*) 0x8257f8a,
	// POKEMON_AMONITAS
	(pokemon_move*) 0x8257fa2,
	// POKEMON_AMOROSO
	(pokemon_move*) 0x8257fb8,
	// POKEMON_KABUTO
	(pokemon_move*) 0x8257fd4,
	// POKEMON_KABUTOPS
	(pokemon_move*) 0x8257fea,
	// POKEMON_AERODACTYL
	(pokemon_move*) 0x8258008,
	// POKEMON_RELAXO
	(pokemon_move*) 0x825801a,
	// POKEMON_ARKTOS
	(pokemon_move*) 0x8258038,
	// POKEMON_ZAPDOS
	(pokemon_move*) 0x825804c,
	// POKEMON_LAVADOS
	(pokemon_move*) 0x8258060,
	// POKEMON_DRATINI
	(pokemon_move*) 0x9180740,
	// POKEMON_DRAGONIR
	(pokemon_move*) 0x9180760,
	// POKEMON_DRAGORAN
	(pokemon_move*) 0x9180780,
	// POKEMON_MEWTU
	(pokemon_move*) 0x9180500,
	// POKEMON_MEW
	(pokemon_move*) 0x9180520,
	// POKEMON_ENDIVIE
	(pokemon_move*) 0x82580e6,
	// POKEMON_LORBLATT
	(pokemon_move*) 0x82580fc,
	// POKEMON_MEGANIE
	(pokemon_move*) 0x8258116,
	// POKEMON_FEURIGEL
	(pokemon_move*) 0x8258130,
	// POKEMON_IGELAVAR
	(pokemon_move*) 0x8258142,
	// POKEMON_TORNUPTO
	(pokemon_move*) 0x8258156,
	// POKEMON_KARNIMANI
	(pokemon_move*) 0x825816c,
	// POKEMON_TYRACROC
	(pokemon_move*) 0x8258180,
	// POKEMON_IMPERGATOR
	(pokemon_move*) 0x8258196,
	// POKEMON_IGNIVOR
	(pokemon_move*) 0x87575f8,
	// POKEMON_RAMOTH
	(pokemon_move*) 0x8757678,
	// POKEMON_GLAZIOLA
	(pokemon_move*) 0x8768010,
	// POKEMON_RESLADERO
	(pokemon_move*) 0x87702c4,
	// POKEMON_LEDYBA
	(pokemon_move*) 0x8258206,
	// POKEMON_LEDIAN
	(pokemon_move*) 0x825821c,
	// POKEMON_WEBARAK
	(pokemon_move*) 0x8258234,
	// POKEMON_ARIADOS
	(pokemon_move*) 0x825824a,
	// POKEMON_IKSBAT
	(pokemon_move*) 0x8258264,
	// POKEMON_LAMPI
	(pokemon_move*) 0x8258280,
	// POKEMON_LANTURN
	(pokemon_move*) 0x8258296,
	// POKEMON_MAGNEZONE
	(pokemon_move*) 0x82582ae,
	// POKEMON_TOGEKISS
	(pokemon_move*) 0x82582ba,
	// POKEMON_FLABEBE
	(pokemon_move*) 0x874d618,
	// POKEMON_TOGEPI
	(pokemon_move*) 0x82582d4,
	// POKEMON_TOGETIC
	(pokemon_move*) 0x82582ee,
	// POKEMON_NATU
	(pokemon_move*) 0x825830e,
	// POKEMON_XATU
	(pokemon_move*) 0x8258320,
	// POKEMON_VOLTILAMM
	(pokemon_move*) 0x8258332,
	// POKEMON_WAATY
	(pokemon_move*) 0x8258342,
	// POKEMON_AMPHAROS
	(pokemon_move*) 0x8744ca8,
	// POKEMON_BLUBELLA
	(pokemon_move*) 0x9180660,
	// POKEMON_MARILL
	(pokemon_move*) 0x8258378,
	// POKEMON_AZUMARILL
	(pokemon_move*) 0x825838c,
	// POKEMON_MOGELBAUM
	(pokemon_move*) 0x82583a6,
	// POKEMON_CLAVION
	(pokemon_move*) 0x8743de0,
	// POKEMON_LICHTEL
	(pokemon_move*) 0x8772b4c,
	// POKEMON_LATERNECTO
	(pokemon_move*) 0x8772b4c,
	// POKEMON_SKLELABRA
	(pokemon_move*) 0x8743c24,
	// POKEMON_GRIFFEL
	(pokemon_move*) 0x8258416,
	// POKEMON_SHNEBEDECK
	(pokemon_move*) 0x825842c,
	// POKEMON_REXBLISAR
	(pokemon_move*) 0x8b10020,
	// POKEMON_AMBIDIFFEL
	(pokemon_move*) 0x8258452,
	// POKEMON_FELINO
	(pokemon_move*) 0x825846a,
	// POKEMON_MORLORD
	(pokemon_move*) 0x8258480,
	// POKEMON_PSIANA
	(pokemon_move*) 0x8258496,
	// POKEMON_NACHTARA
	(pokemon_move*) 0x82584ae,
	// POKEMON_KRAMURX
	(pokemon_move*) 0x82584c6,
	// POKEMON_LASCHOKING
	(pokemon_move*) 0x82584d8,
	// POKEMON_KRAMSHEF
	(pokemon_move*) 0x82584f0,
	// POKEMON_ICOGNITO
	(pokemon_move*) 0x8258506,
	// POKEMON_FROSDEDJE
	(pokemon_move*) 0x8772b74,
	// POKEMON_SKORGRO
	(pokemon_move*) 0x8258514,
	// POKEMON_TANNZA
	(pokemon_move*) 0x825852a,
	// POKEMON_FORSTELLKA
	(pokemon_move*) 0x825853e,
	// POKEMON_ELEVOLTEK
	(pokemon_move*) 0x8258556,
	// POKEMON_SKORGLA
	(pokemon_move*) 0x825856e,
	// POKEMON_STAHLOS
	(pokemon_move*) 0x8258580,
	// POKEMON_SNUBBULL
	(pokemon_move*) 0x825859a,
	// POKEMON_GRANBULL
	(pokemon_move*) 0x82585b0,
	// POKEMON_MAMUTEL
	(pokemon_move*) 0x91807a0,
	// POKEMON_SCHEROX
	(pokemon_move*) 0x9180560,
	// POKEMON_POTTROTT
	(pokemon_move*) 0x82585f6,
	// POKEMON_SKARABORN
	(pokemon_move*) 0x8258606,
	// POKEMON_KRYPPUK
	(pokemon_move*) 0x825861c,
	// POKEMON_TEDDIURSA
	(pokemon_move*) 0x8258636,
	// POKEMON_URSARING
	(pokemon_move*) 0x825864c,
	// POKEMON_SCHNECKMAG
	(pokemon_move*) 0x8258666,
	// POKEMON_MAGCARGO
	(pokemon_move*) 0x825867a,
	// POKEMON_QUIEKEL
	(pokemon_move*) 0x8258692,
	// POKEMON_KEIFEL
	(pokemon_move*) 0x8772d6c,
	// POKEMON_CORASONN
	(pokemon_move*) 0x82586bc,
	// POKEMON_REMORAID
	(pokemon_move*) 0x82586d2,
	// POKEMON_OCTILLERY
	(pokemon_move*) 0x82586e4,
	// POKEMON_BOTOGEL
	(pokemon_move*) 0x82586f8,
	// POKEMON_SCHLURPLEK
	(pokemon_move*) 0x82586fc,
	// POKEMON_PANZAERON
	(pokemon_move*) 0x8258710,
	// POKEMON_HUNDUSTER
	(pokemon_move*) 0x8258726,
	// POKEMON_HUNDEMON
	(pokemon_move*) 0x825873c,
	// POKEMON_SEEDRAKING
	(pokemon_move*) 0x8258754,
	// POKEMON_PHANPY
	(pokemon_move*) 0x825876c,
	// POKEMON_DONPHAN
	(pokemon_move*) 0x8258780,
	// POKEMON_PORYGON2
	(pokemon_move*) 0x8258794,
	// POKEMON_VOLUMINAS
	(pokemon_move*) 0x82587ac,
	// POKEMON_TRAUNMAGIL
	(pokemon_move*) 0x82587c2,
	// POKEMON_RABAUZ
	(pokemon_move*) 0x82587d8,
	// POKEMON_KAPOERA
	(pokemon_move*) 0x82587dc,
	// POKEMON_KUSSILLA
	(pokemon_move*) 0x82587f4,
	// POKEMON_ELEKID
	(pokemon_move*) 0x825880c,
	// POKEMON_MAGBY
	(pokemon_move*) 0x825881e,
	// POKEMON_MILTANK
	(pokemon_move*) 0x8258832,
	// POKEMON_HEITEIRA
	(pokemon_move*) 0x8258846,
	// POKEMON_RAIKOU
	(pokemon_move*) 0x8258860,
	// POKEMON_ENTEI
	(pokemon_move*) 0x8258876,
	// POKEMON_SUICUNE
	(pokemon_move*) 0x825888c,
	// POKEMON_LARVITAR
	(pokemon_move*) 0x82588a2,
	// POKEMON_PUPITAR
	(pokemon_move*) 0x82588b8,
	// POKEMON_DESPOTAR
	(pokemon_move*) 0x82588d2,
	// POKEMON_LUGIA
	(pokemon_move*) 0x82588ec,
	// POKEMON_HO_OH
	(pokemon_move*) 0x8258902,
	// POKEMON_CELEBI
	(pokemon_move*) 0x8258918,
	// POKEMON_BISAFLORM
	(pokemon_move*) 0x82573ec,
	// POKEMON_GLURAKM
	(pokemon_move*) 0x87436a0,
	// POKEMON_AQUANAM
	(pokemon_move*) 0x8744cd8,
	// POKEMON_BLITZAM
	(pokemon_move*) 0x8743be8,
	// POKEMON_FLAMARM
	(pokemon_move*) 0x8744614,
	// POKEMON_DURENGARDA
	(pokemon_move*) 0x8768460,
	// POKEMON_IN
	(pokemon_move*) 0x82589e4,
	// POKEMON_GAME
	(pokemon_move*) 0x8258948,
	// POKEMON_TURTOKM
	(pokemon_move*) 0x8743874,
	// POKEMON_AMPHARAOSM
	(pokemon_move*) 0x8744ca8,
	// POKEMON_GENGARM
	(pokemon_move*) 0x8744dd0,
	// POKEMON_BIBORM
	(pokemon_move*) 0x8744e4c,
	// POKEMON_ALTARIAM
	(pokemon_move*) 0x8745310,
	// POKEMON_GEOWAZM
	(pokemon_move*) 0x8745340,
	// POKEMON_SENGOM
	(pokemon_move*) 0x87436c4,
	// POKEMON_VIPITISM
	(pokemon_move*) 0x8258968,
	// POKEMON_ZOBIRISM
	(pokemon_move*) 0x825896c,
	// POKEMON_10d
	(pokemon_move*) 0x8258970,
	// POKEMON_10e
	(pokemon_move*) 0x8258974,
	// POKEMON_10f
	(pokemon_move*) 0x8258978,
	// POKEMON_110
	(pokemon_move*) 0x825897c,
	// POKEMON_111
	(pokemon_move*) 0x8258980,
	// POKEMON_112
	(pokemon_move*) 0x8258984,
	// POKEMON_113
	(pokemon_move*) 0x8258988,
	// POKEMON_114
	(pokemon_move*) 0x825898c,
	// POKEMON_LOCKSCHAL
	(pokemon_move*) 0x8258990,
	// POKEMON_STICHSCHAL
	(pokemon_move*) 0x8258990,
	// POKEMON_STAHLSTICH
	(pokemon_move*) 0x8258990,
	// POKEMON_WELUNO
	(pokemon_move*) 0x82589e4,
	// POKEMON_ORTHODOS
	(pokemon_move*) 0x82589e4,
	// POKEMON_ZERBERTRES
	(pokemon_move*) 0x82589e4,
	// POKEMON_SEEKID
	(pokemon_move*) 0x8258a3c,
	// POKEMON_SEESKULL
	(pokemon_move*) 0x8258a3c,
	// POKEMON_SKULLYDRA
	(pokemon_move*) 0x8258a3c,
	// POKEMON_FIFFYEN
	(pokemon_move*) 0x8258a96,
	// POKEMON_MAGNAYEN
	(pokemon_move*) 0x8258ab0,
	// POKEMON_ZIGZACHS
	(pokemon_move*) 0x8258ad0,
	// POKEMON_GERADAKS
	(pokemon_move*) 0x8258aea,
	// POKEMON_WAUMPEL
	(pokemon_move*) 0x8258b08,
	// POKEMON_SCHALOKO
	(pokemon_move*) 0x8258b10,
	// POKEMON_PAPINELLA
	(pokemon_move*) 0x8258b16,
	// POKEMON_PANEKON
	(pokemon_move*) 0x8258b2c,
	// POKEMON_PUDOX
	(pokemon_move*) 0x8258b32,
	// POKEMON_LOTURZEL
	(pokemon_move*) 0x8258b48,
	// POKEMON_LOMBRERO
	(pokemon_move*) 0x8258b58,
	// POKEMON_KAPPALORES
	(pokemon_move*) 0x8258b6e,
	// POKEMON_SAMURZEL
	(pokemon_move*) 0x8258b78,
	// POKEMON_BLANAS
	(pokemon_move*) 0x8258b88,
	// POKEMON_TENGULIST
	(pokemon_move*) 0x8258b9e,
	// POKEMON_NINCADA
	(pokemon_move*) 0x8258ba8,
	// POKEMON_NINJASK
	(pokemon_move*) 0x8258bbe,
	// POKEMON_NINJATOM
	(pokemon_move*) 0x8258bde,
	// POKEMON_SCHWALBINI
	(pokemon_move*) 0x8258bf4,
	// POKEMON_SCHWALBOSS
	(pokemon_move*) 0x8258c08,
	// POKEMON_KNILZ
	(pokemon_move*) 0x8258c20,
	// POKEMON_KAPILZ
	(pokemon_move*) 0x8258c36,
	// POKEMON_PANDIR
	(pokemon_move*) 0x8258c54,
	// POKEMON_WINGULL
	(pokemon_move*) 0x8258c6c,
	// POKEMON_PELIPPER
	(pokemon_move*) 0x8258c7e,
	// POKEMON_GEHWEIHER
	(pokemon_move*) 0x8258c9a,
	// POKEMON_MASKEREGEN
	(pokemon_move*) 0x8258cac,
	// POKEMON_WAILMER
	(pokemon_move*) 0x8258cc6,
	// POKEMON_WAILORD
	(pokemon_move*) 0x8258ce0,
	// POKEMON_ENECO
	(pokemon_move*) 0x8258d00,
	// POKEMON_ENEKORO
	(pokemon_move*) 0x8258d1a,
	// POKEMON_KECLEON
	(pokemon_move*) 0x8258d24,
	// POKEMON_PUPPANCE
	(pokemon_move*) 0x8258d40,
	// POKEMON_LEPUMENTAS
	(pokemon_move*) 0x8258d58,
	// POKEMON_NASGNET
	(pokemon_move*) 0x8258d78,
	// POKEMON_MAGBRANT
	(pokemon_move*) 0x8258d8e,
	// POKEMON_ZWIRRFINST
	(pokemon_move*) 0x8258da8,
	// POKEMON_SCHMERBE
	(pokemon_move*) 0x8258dc4,
	// POKEMON_WELSAR
	(pokemon_move*) 0x8258ddc,
	// POKEMON_LIEBISKUS
	(pokemon_move*) 0x8258dfa,
	// POKEMON_KREBSCORPS
	(pokemon_move*) 0x8258e0e,
	// POKEMON_KREBUTACK
	(pokemon_move*) 0x8258e28,
	// POKEMON_BARSCHWA
	(pokemon_move*) 0x8258e48,
	// POKEMON_MILOTIC
	(pokemon_move*) 0x8258e50,
	// POKEMON_KANIVANHA
	(pokemon_move*) 0x8258e68,
	// POKEMON_TOHAIDO
	(pokemon_move*) 0x8258e7e,
	// POKEMON_KNACKLION
	(pokemon_move*) 0x8258e9c,
	// POKEMON_VIBRAVA
	(pokemon_move*) 0x8258eae,
	// POKEMON_LIBELLDRA
	(pokemon_move*) 0x8258ec8,
	// POKEMON_RIOLU
	(pokemon_move*) 0x8258ee2,
	// POKEMON_LUCARIO
	(pokemon_move*) 0x8b10070,
	// POKEMON_FRIZELBLIZ
	(pokemon_move*) 0x8258f1e,
	// POKEMON_VOLTENSO
	(pokemon_move*) 0x8258f36,
	// POKEMON_CAMAUB
	(pokemon_move*) 0x8258f54,
	// POKEMON_CAMERUPT
	(pokemon_move*) 0x8258f6a,
	// POKEMON_SEEMOPS
	(pokemon_move*) 0x8258f86,
	// POKEMON_SEEJONG
	(pokemon_move*) 0x8258fa2,
	// POKEMON_WALRAISA
	(pokemon_move*) 0x8258fbe,
	// POKEMON_TUSKA
	(pokemon_move*) 0x8258fda,
	// POKEMON_NOKTUSKA
	(pokemon_move*) 0x8258ff8,
	// POKEMON_SCHNEPPKE
	(pokemon_move*) 0x825901c,
	// POKEMON_FIRNONTOR
	(pokemon_move*) 0x8259034,
	// POKEMON_LUNASTEIN
	(pokemon_move*) 0x8259052,
	// POKEMON_SONNFEL
	(pokemon_move*) 0x8259068,
	// POKEMON_AZURILL
	(pokemon_move*) 0x825907e,
	// POKEMON_SPOINK
	(pokemon_move*) 0x825908c,
	// POKEMON_GROINK
	(pokemon_move*) 0x82590a4,
	// POKEMON_PLUSLE
	(pokemon_move*) 0x82590c2,
	// POKEMON_MINUN
	(pokemon_move*) 0x82590da,
	// POKEMON_FLUNKIFER
	(pokemon_move*) 0x82590f2,
	// POKEMON_MEDITIE
	(pokemon_move*) 0x825910c,
	// POKEMON_MEDITALIS
	(pokemon_move*) 0x8259126,
	// POKEMON_WABLU
	(pokemon_move*) 0x825914c,
	// POKEMON_ALTARIA
	(pokemon_move*) 0x8745310,
	// POKEMON_ISSO
	(pokemon_move*) 0x8259184,
	// POKEMON_ZWIRRLICHT
	(pokemon_move*) 0x8259194,
	// POKEMON_ZWIRRKLOP
	(pokemon_move*) 0x82591ac,
	// POKEMON_ROSELIA
	(pokemon_move*) 0x82591ca,
	// POKEMON_BUMMELZ
	(pokemon_move*) 0x82591ea,
	// POKEMON_MUNTIER
	(pokemon_move*) 0x82591fe,
	// POKEMON_LETARKING
	(pokemon_move*) 0x8259218,
	// POKEMON_SCHLUPPUCK
	(pokemon_move*) 0x8259232,
	// POKEMON_SCHLUKWECH
	(pokemon_move*) 0x825924a,
	// POKEMON_TROPIUS
	(pokemon_move*) 0x9180680,
	// POKEMON_KAUMALAT
	(pokemon_move*) 0x8259282,
	// POKEMON_KNARKSEL
	(pokemon_move*) 0x8259282,
	// POKEMON_KNAKRACK
	(pokemon_move*) 0x8259282,
	// POKEMON_PERLU
	(pokemon_move*) 0x82592d8,
	// POKEMON_AALABYSS
	(pokemon_move*) 0x82592e2,
	// POKEMON_SAGANABYSS
	(pokemon_move*) 0x82592f4,
	// POKEMON_ABSOL
	(pokemon_move*) 0x8259306,
	// POKEMON_SHUPPET
	(pokemon_move*) 0x825931e,
	// POKEMON_BANETTE
	(pokemon_move*) 0x8259334,
	// POKEMON_VIPITIS
	(pokemon_move*) 0x8259350,
	// POKEMON_SENGO
	(pokemon_move*) 0x87436c4,
	// POKEMON_RELICANTH
	(pokemon_move*) 0x825937e,
	// POKEMON_STOLLUNIOR
	(pokemon_move*) 0x8259396,
	// POKEMON_STOLLRAK
	(pokemon_move*) 0x82593b0,
	// POKEMON_STOLLOSS
	(pokemon_move*) 0x82593d0,
	// POKEMON_FORMEO
	(pokemon_move*) 0x82593f0,
	// POKEMON_VOLBEAT
	(pokemon_move*) 0x8259402,
	// POKEMON_ILLUMISE
	(pokemon_move*) 0x8259418,
	// POKEMON_LILIEP
	(pokemon_move*) 0x825942e,
	// POKEMON_WIELIE
	(pokemon_move*) 0x8259444,
	// POKEMON_ANORITH
	(pokemon_move*) 0x8259460,
	// POKEMON_ARMALDO
	(pokemon_move*) 0x8259476,
	// POKEMON_TRASLA
	(pokemon_move*) 0x8259492,
	// POKEMON_KIRLIA
	(pokemon_move*) 0x82594a8,
	// POKEMON_GUARDEVOIR
	(pokemon_move*) 0x82594c6,
	// POKEMON_KINDWURM
	(pokemon_move*) 0x82594e2,
	// POKEMON_DRASCHEL
	(pokemon_move*) 0x82594fa,
	// POKEMON_BRUTALANDA
	(pokemon_move*) 0x825951a,
	// POKEMON_TANHEL
	(pokemon_move*) 0x825953c,
	// POKEMON_METANG
	(pokemon_move*) 0x9180580,
	// POKEMON_METAGROSS
	(pokemon_move*) 0x91805a0,
	// POKEMON_REGIROCK
	(pokemon_move*) 0x8259572,
	// POKEMON_REGICE
	(pokemon_move*) 0x8259586,
	// POKEMON_REGISTEEL
	(pokemon_move*) 0x825959a,
	// POKEMON_KYOGRE
	(pokemon_move*) 0x82595b0,
	// POKEMON_GROUDON
	(pokemon_move*) 0x82595c8,
	// POKEMON_RAYQUAZA
	(pokemon_move*) 0x82595e0,
	// POKEMON_LATIAS
	(pokemon_move*) 0x82595f8,
	// POKEMON_LATIOS
	(pokemon_move*) 0x8259610,
	// POKEMON_JIRACHI
	(pokemon_move*) 0x8259628,
	// POKEMON_DEOXYS
	(pokemon_move*) 0x8259642,
	// POKEMON_PALIMPALIM
	(pokemon_move*) 0x825965c,
	// POKEMON_EGG
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_B
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_C
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_D
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_E
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_F
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_G
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_H
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_I
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_J
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_K
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_L
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_M
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_N
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_O
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_P
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_Q
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_R
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_S
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_T
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_U
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_V
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_W
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_X
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_Y
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_Z
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_EXCLAMATION
	(pokemon_move*) NULL,
	// POKEMON_ICOGNITO_QUESTION
	(pokemon_move*) NULL,
        // POKEMON_TEST
        pmoves_test
};