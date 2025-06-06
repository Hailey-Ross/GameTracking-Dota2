class CDOTA_AttackRecord
{
	CHandle< C_BaseEntity > m_hSource;
	CHandle< C_DOTABaseAbility > m_hInflictor;
	CHandle< C_BaseEntity > m_hTarget;
	CHandle< C_BaseEntity > m_hProjectileSource;
	CHandle< C_BaseEntity > m_hKillCreditOverride;
	float32 m_flDamage;
	float32 m_flOriginalDamage;
	float32 m_flDamagePhysical;
	float32 m_flDamagePhysical_IllusionDisplay;
	float32 m_flDamageMagical;
	float32 m_flDamageComposite;
	float32 m_flDamagePure;
	int16 m_iRecord;
	int32 m_iDamageCategory;
	int32 m_iFailType;
	int32 m_iDamageType;
	int32 m_iFlags;
	int32 m_animation;
	bitfield:1 m_bAttack;
	bitfield:1 m_bRangedAttack;
	bitfield:1 m_bDirectionalRangedAttack;
	bitfield:1 m_bSkipRangeCheck;
	bitfield:1 m_bFakeAttack;
	bitfield:1 m_bNeverMiss;
	bitfield:1 m_bLethalAttack;
	bitfield:1 m_bTriggeredAttack;
	bitfield:1 m_bNoCooldown;
	bitfield:1 m_bProcessProcs;
	bitfield:1 m_bUseProjectile;
	bitfield:1 m_bUseCastAttackOrb;
	bitfield:1 m_bAutoCastAttack;
	bitfield:1 m_bIgnoreBaseArmor;
	bitfield:1 m_bIgnoreObstructions;
	bitfield:1 m_bSuppressAttackSounds;
	bitfield:1 m_bForceAttackMissSound;
	bitfield:1 m_bSuppressDamageSounds;
	bitfield:1 m_bSuppressDamageEffects;
	int32 m_nBashSource;
	int32 m_nCritSource;
	float32 m_flAttackHeight;
	float32 m_flCombatLogCreditFactor;
	float32 m_flCriticalBonus;
	float32 m_flCriticalDamage;
	float32 m_flCriticalDisplay;
	float32 m_flDeadlyBlowBonus;
	float32 m_flDeadlyBlowDamage;
	float32 m_flDeadlyBlowDisplay;
	int32 m_iProjectileSpeed;
	Vector m_vForceDirectionOverride;
	Vector m_vTargetLoc;
	Vector m_vBlockLoc;
	CUtlSymbolLarge m_iszAutoAttackRangedParticle;
	CUtlSymbolLarge m_iszAutoAttackRangedParticleAdditionalEffect;
	ParticleIndex_t m_iCustomFXIndex;
	DOTAProjectileAttachment_t m_iCustomProjectileAttachment;
	KeyValues3 m_kvExtraData;
};
