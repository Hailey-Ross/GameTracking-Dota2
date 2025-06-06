enum TakeDamageFlags_t : uint64_t
{
	DFLAG_NONE = 0,
	DFLAG_SUPPRESS_HEALTH_CHANGES = 1,
	DFLAG_SUPPRESS_PHYSICS_FORCE = 2,
	DFLAG_SUPPRESS_EFFECTS = 4,
	DFLAG_PREVENT_DEATH = 8,
	DFLAG_FORCE_DEATH = 16,
	DFLAG_ALWAYS_GIB = 32,
	DFLAG_NEVER_GIB = 64,
	DFLAG_REMOVE_NO_RAGDOLL = 128,
	DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 256,
	DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 512,
	DFLAG_RADIUS_DMG = 1024,
	DFLAG_FORCEREDUCEARMOR_DMG = 2048,
	DFLAG_SUPPRESS_INTERRUPT_FLINCH = 4096,
	DFLAG_IGNORE_DESTRUCTIBLE_PARTS = 8192,
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	DMG_LASTDFLAG = 8192,
};
