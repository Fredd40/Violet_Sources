import constants

flags = """0x966 = TrainerTippWondertrade
	0x965 = TrainerTippFpMenu
	0x964 = TrainerTippDetector
	0x963 = TrainerTipp Shell
	0x962 = TrainerTipp Mushroom
	0x961 = ItemID
	0x960 = VulconEvent
	0x95F = DiseraktVolcano
	0x95E = GroudonVisibleVolcano
	0x95D = ItemID
	0x95C = ItemID
	0x95B = ItemID
	0x95A  =ItemID
	0x959 = ItemID
	0x958 = ItemID
	0x957 = IgvaVulcanoEntrance
	0x956 = TmID
	0x955 = EggIDs
	0x954 = AshPresent
	0x953 = ItemID
	0x952 = ItemID
	0x951 = AshBagReceived
	0x950 = NuggetAschhain
	0x94F = KarmaEventAschhain
	0x94E = LavadosSeen
	0x94D = EggID
	0x94C = EggID
	0x94B = ItemID
	0x94A = ItemID
	0x949 = Elixier im Markt verfügbar
	0x948 = Äther im Markt verfügbar
	0x947 = ItemID
	0x946 = FossilCurrentlyUnderRestauration
	0x945 = OrinaCityBankThere
	0x944 = WolkenherzStolen
	0x943 = PirateOrinaCityDissappeared
	0x942 = EventMusemActive
	0x941 = EventMuseum
	0x940 = UpGrade
	0x93F = Access to fossil e.g. in LazCorp
	0x93E = Matschbombe
	0x93D = EggID
	0x93C = FutureScriptDone
	0x93B = ItemID
	0x93A = ItemID
	0x939 = ItemID
	0x938 = ItemID
	0x937 = ItemID
	0x936 = EggID
	0x935 = ItemID
	0x934 = VioletGruntsRoute4
	0x933 = EliseInFrontofMeriana
	0x932 = MerianaCity Arena locked
	0x931 = ItemID
	0x930 = HMFlyID
	0x92F = ItemID
	0x92E = ItemID
	0x92D = ItemID
	0x92B = ItemID
	0x92C = ItemID
	0x92A = Pokedex_Feature_2
	0x929 = Pokedex_Feature_1
	0x928 = Pokedex_Feature_0
	0x927 = PokedexFeatureHabitat
	0x926 = EgID
	0x925 = blackmarket cleared
	0x924 = spitzhacke obtained (for dungeon)
	0x923 = dmap generated`?
	0x922 = load dynamic map
	0x921 = Has player recieved mega amulett? (if true megas can be used)
	0x920 =Mega Evolution performed
	0x91F = Mew Flag
	0x91E = Worldmap -> rote Animation
	0x91D = Detektor ID
	0x91C = LesterID Aktania
	0x91B = ItemId
	0x91A = ItemID
	0x919 = AngelAktaina
	0x918 = Ability_Sparsam
	0x917 = Pokeradar – has a pokemon spawned? (0 = visible, 1 = invisible)
	0x916 = BG_AlignmentFlag (wenn gesetzt, wird der BG nicht mehr entsprechend der Pos gescrollt)
	0x915 = Wonder Trade ID (for Pokepad)
	0x914 = ID
	0x911 = TransparencyCtrlFlag (set = transparency is not affected)
	0x910 = TransparencyFlag (für den palhandler wichtig)
	0x90F = BlackoutFlag (wenn sie gesetzt ist, wird man beim verleiren nicht ins Pokecenter gewarpt)
	0x90A = Gengarnit in Aktania
	0x905 = Flashback ID in Aktania
	0x904 = Blaise und Felix Höhle in Ball
	0x903 = Mariana City Führung
	0x902 = Mariana City Führung
	0x901 = Meriana City Führung
	0x900 = Rivale im eigenen Haus
	0x271 = ItemID
	0x270 = BBshipMarket
	0x26F = Schattenglas
	0x26E = ItemID
	0x26D = BlaiseBlackMarket
	0x26C = PrimusBlackMarket
	0x26B = IgvaBlackMarket
	0x267 = Küstenberg0
    0x268 = Küstenberg1
    0x269 = Küstenberg2
	0x266 = ItemID
	0x265 = ItemID
	0x264 =EvolithKask
	0x263 = ParoleKaskUntergrund
	0x262 = FelixKask
	0x261 = ItemID
	0x260 = itemID
	0x25E = ItemID
	0x25D = ItemID
	0x25C = GruntID
	0x25B = ItemID
	0x25A = ItemID
	0x259 = ItemID
	0x258 = ItemID
	0x257 = ItemID
	0x256 = ItemID
	0x255 = ItemID
	0x254 = FossilID
	0x253 = RecievedClawFossil???
	0x252 = ItemID
	0x251 = EiID
	0x250 = ItemID
	0x24F = ItemID
	0x24E = ItemID
	0x24D = ItemID
	0x24C = ItemID
	0x24B = ItemID
	0x24A = ItemID
	0x249 = ItemID
	0x248 =ItemID
	0x247 = ItemID
	0x246 = used
	0x245 = MaikeIDRoute3
	0x244 = Silvania Team Violet done?
	0x243 = ItemID
	0x242 = ItemID
	0x241 = ItemID
	0x240 = ItemID
	0x23F = ItemID
	0x23E = ItemID
	0x23D = Energieball Tutor Flag
	0x23C = PokeradarFlag
	0x23B = ItemID
	0x23A = ItemID
	0x239= Rüpel Silvania
	0x238 = Branch for Levelscript in Mias House
	0x237 = ItemID
	0x236 = Faun/MiaID Mias Haus in Silvania
	0x235 = FaunID Einöde
	0x234 = ItemID
	0x233 = ItemID
	0x232 = SCriptAktaniaII
	0x231 = ItemID
	0x230 = ItemID
	0x22F = Cut
	0x22E = Cut
	0x22D = ItemID
	0x22C = ItemID
	0x22B = ItemID
	0x22A = Item ID
	0x229 = Beerensaft in Sivlania
	0x228 = ?
	0x227=QuestMerianaCity
	0x226=QuestMerianaCity
	0x225=EggRoute2
	0x224=EggRoute1
	0x223=BiborQuestRecievedBibor
	0x221=BiborQuestTriggered (set if not triggered)
	0x222=BiborQuestFinished
	0x220=MillScriptEgg
	0x21f = MillScriptPersID
	0x21e = MillScript: Did you do the goood choice?
	0x21d = itemscript
	0x21c= ItemIDff
	0x21b=ItemID
	0x21a = itemID
	0x219=ItemID
	0x218=ItemID
	0x217 =ItemID
	0x216=ItemID
	0x215 =ItemID
	0x214 = ItemID
	0x213=ItemID
	0x212 = ItemID
	0x211=ItemID
	0x210=ItemID
	0x20f= LesterAktania4
	0x20e = LesterArena3
	0x20d = LesterAktania
	0x20C = LesterArena
	0x20B = LesterAktania
	0x20A =ItemID
	0x209 = ItemID
	0x208 = ItemID
	0x207 = ItemID
	0x206 = ItemID
	0x205 = ItemID
	0x204 = ???
	0x203 = ???
	0x202 = ???
	0x201 = ItemID
	0x200= Rivale Amonia"""

def cap(s):
    return "".join([c.upper() for c in s])


lines = [list(map((lambda s: cap(s.strip().replace(" ", "_")).replace("Ä", "AE").replace("Ü", "UE").replace("Ö", "OE")), l.split("="))) for l in flags.split("\n")]
vals = {}
d = {}
for token in lines:
    key = int(token[0], 0)
    val = token[1]
    if not val in vals: vals[val] = 1
    else: 
        vals[val] += 1
        val += str(vals[val])
    d[key] = val

for k in constants.flag_table:
    d[k] = constants.flag_table[k]


open("D:/temp/flags.txt", "w+").write("\n\t".join([hex(k) + " : \"" + d[k] + "\"" for k in sorted(d.keys())]))




