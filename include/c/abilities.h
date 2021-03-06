#ifndef H_ABILITIES
#define H_ABILITIES


#define ABILITY_CNT 0x71

/**
 * Changes the species of a battler (used for change stance)
 * @param target the battler to target
 * @param species the species to change the battler into
 */
void stance_change_change_species(u8 target, u16 species);

/**
 * Gets the ability of a species
 * @param species the species to retrieve the ability from
 * @param fields merged ability bit and hidden ability bit
 * @return the ability of the species
 */
u8 ability_get(u16 species, u8 fields);

/**
 * Executes the abilities for a certain battle state
 * @param state the battle state
 * @param attacker attacking battler
 * @param unkown TODO
 * @param defender_ability the ability of the defending battler
 * @param active_attack the currently used attack
 * @return whether an ability was triggered in the current state
 */
u8 ability_execute(u8 state, u8 attacker, u8 unkown, u8
    defender_ability, u16 active_attack);

extern u8 ability_names[ABILITY_CNT][0xD];
u8 *ability_descriptions[ABILITY_CNT];

// End of turn abilities
extern u8 bsc_recoil[];
extern u8 bsc_heal[];
extern u8 bsc_tollwut[];
extern u8 bsc_tollwut_attack_boost[];
extern u8 bsc_lucid[];
extern u8 bsc_harvest[];
extern u8 bsc_hagelalarm[];
extern u8 bsc_hack[];
extern u8 bsc_life_orb[];
extern u8 bsc_lernfaehig[];
extern u8 bsc_hochmut[];
extern u8 bsc_lebensraeuber[];
extern u8 bsc_curator[];
extern u8 bsc_extradorn[];
extern u8 bsc_fluffy[];


#endif
