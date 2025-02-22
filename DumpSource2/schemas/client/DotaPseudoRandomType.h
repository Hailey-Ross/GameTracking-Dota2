enum DotaPseudoRandomType : uint32_t
{
	DOTA_PSEUDO_RANDOM_NONE = 0,
	DOTA_PSEUDO_RANDOM_MAGNUS_SHARD = 1,
	DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT = 2,
	DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_DAGGER = 3,
	DOTA_PSEUDO_RANDOM_PHANTOMLANCER_JUXTAPOSE = 4,
	DOTA_PSEUDO_RANDOM_TINY_CRAGGY = 5,
	DOTA_PSEUDO_RANDOM_COLD_REBUKE = 6,
	DOTA_PSEUDO_RANDOM_WOLF_CRIT = 7,
	DOTA_PSEUDO_RANDOM_AXE_HELIX = 8,
	DOTA_PSEUDO_RANDOM_AXE_HELIX_ATTACK = 9,
	DOTA_PSEUDO_RANDOM_LEGION_MOMENT = 10,
	DOTA_PSEUDO_RANDOM_SLARDAR_BASH = 11,
	DOTA_PSEUDO_RANDOM_OD_ESSENCE = 12,
	DOTA_PSEUDO_RANDOM_DROW_MARKSMANSHIP = 13,
	DOTA_PSEUDO_RANDOM_OGRE_MAGI_FIREBLAST = 14,
	DOTA_PSEUDO_RANDOM_OGRE_ITEM_MULTICAST = 15,
	DOTA_PSEUDO_RANDOM_SPIRITBREAKER_GREATERBASH = 16,
	DOTA_PSEUDO_RANDOM_LONE_DRUID_ENTANGLE = 17,
	DOTA_PSEUDO_RANDOM_FACELESS_BASH = 18,
	DOTA_PSEUDO_RANDOM_FACELESS_EVADE_SPELL = 19,
	DOTA_PSEUDO_RANDOM_FACELESS_EVADE_ATTACK = 20,
	DOTA_PSEUDO_RANDOM_FACELESS_VOID_BACKTRACK = 21,
	DOTA_PSEUDO_RANDOM_BREWMASTER_CRIT = 22,
	DOTA_PSEUDO_RANDOM_BREWMASTER_CINDER_BREW = 23,
	DOTA_PSEUDO_RANDOM_SNIPER_HEADSHOT = 24,
	DOTA_PSEUDO_RANDOM_ATOS = 25,
	DOTA_PSEUDO_RANDOM_JUGG_CRIT = 26,
	DOTA_PSEUDO_RANDOM_DAZZLE_SCEPTER = 27,
	DOTA_PSEUDO_RANDOM_CHAOS_CRIT = 28,
	DOTA_PSEUDO_RANDOM_LYCAN_CRIT = 29,
	DOTA_PSEUDO_RANDOM_TUSK_CRIT = 30,
	DOTA_PSEUDO_RANDOM_CM_FREEZING_FIELD = 31,
	DOTA_PSEUDO_RANDOM_GENERIC_BASHER = 32,
	DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT = 33,
	DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT_MORTAL = 34,
	DOTA_PSEUDO_RANDOM_ITEM_GREATERCRIT = 35,
	DOTA_PSEUDO_RANDOM_ITEM_LESSERCRIT = 36,
	DOTA_PSEUDO_RANDOM_ITEM_BASHER = 37,
	DOTA_PSEUDO_RANDOM_ITEM_SOLAR_CREST = 38,
	DOTA_PSEUDO_RANDOM_ITEM_JAVELIN_ACCURACY = 39,
	DOTA_PSEUDO_RANDOM_ITEM_TRIDENT = 40,
	DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL = 41,
	DOTA_PSEUDO_RANDOM_ITEM_ABYSSAL_BLOCK = 42,
	DOTA_PSEUDO_RANDOM_ITEM_STOUT = 43,
	DOTA_PSEUDO_RANDOM_ITEM_VANGUARD = 44,
	DOTA_PSEUDO_RANDOM_ITEM_CRIMSON_GUARD = 45,
	DOTA_PSEUDO_RANDOM_ITEM_PMS = 46,
	DOTA_PSEUDO_RANDOM_ITEM_HALBRED_MAIM = 47,
	DOTA_PSEUDO_RANDOM_ITEM_SANGEYASHA_MAIM = 48,
	DOTA_PSEUDO_RANDOM_ITEM_SANGEKAYA_MAIM = 49,
	DOTA_PSEUDO_RANDOM_ITEM_SANGE_MAIM = 50,
	DOTA_PSEUDO_RANDOM_ITEM_BUTTERFLY = 51,
	DOTA_PSEUDO_RANDOM_ITEM_MAELSTROM = 52,
	DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR = 53,
	DOTA_PSEUDO_RANDOM_ITEM_MJOLLNIR_STATIC = 54,
	DOTA_PSEUDO_RANDOM_ITEM_MKB = 55,
	DOTA_PSEUDO_RANDOM_ITEM_SILVER_EDGE = 56,
	DOTA_PSEUDO_RANDOM_ITEM_NAGINATA = 57,
	DOTA_PSEUDO_RANDOM_TROLL_BASH = 58,
	DOTA_PSEUDO_RANDOM_RIKI_SMOKE_SCREEN = 59,
	DOTA_PSEUDO_RANDOM_CHAOS_DOUBLE_CRIT = 60,
	DOTA_PSEUDO_RANDOM_CHAOS_TRIPLE_CRIT = 61,
	DOTA_PSEUDO_RANDOM_GENERIC_EVASION = 62,
	DOTA_PSEUDO_RANDOM_GENERIC_HEIGHT_MISS = 63,
	DOTA_PSEUDO_RANDOM_GENERIC_MISS = 64,
	DOTA_PSEUDO_RANDOM_ARMADILLO_HEARTPIERCER = 65,
	DOTA_PSEUDO_RANDOM_MARS_SHIELD = 66,
	DOTA_PSEUDO_RANDOM_CHAOS_KNIGHT_INNATE_REFUND = 67,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER1 = 68,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER2 = 69,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER3 = 70,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER4 = 71,
	DOTA_PSEUDO_RANDOM_NEUTRAL_DROP_TIER5 = 72,
	DOTA_PSEUDO_RANDOM_MARS_BULWARK = 73,
	DOTA_PSEUDO_RANDOM_MUERTA_GUNSLINGER = 74,
	DOTA_PSEUDO_RANDOM_TROLL_FERVOR_SHARD = 75,
	DOTA_PSEUDO_RANDOM_SNAPFIRE_GLANCING = 76,
	DOTA_PSEUDO_RANDOM_PANGOLIER_PARRY = 77,
	DOTA_PSEUDO_RANDOM_HOODWINK_REDIRECT = 78,
	DOTA_PSEUDO_RANDOM_KEZ_SAI = 79,
	DOTA_PSEUDO_RANDOM_CUSTOM_GENERIC = 80,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_1 = 81,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_2 = 82,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_3 = 83,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_4 = 84,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_5 = 85,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_6 = 86,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_7 = 87,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_8 = 88,
	DOTA_PSEUDO_RANDOM_CUSTOM_GAME_9 = 89,
};
