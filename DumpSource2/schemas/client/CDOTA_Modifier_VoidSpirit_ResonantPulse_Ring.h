class CDOTA_Modifier_VoidSpirit_ResonantPulse_Ring : public CDOTA_Buff
{
	float32 m_fLastRadius;
	float32 m_fCurRadius;
	GameTime_t m_fLastThink;
	ParticleIndex_t m_nFXIndex;
	CUtlVector< CHandle< C_BaseEntity > > m_EntitiesHit;
	float32 speed;
	float32 radius;
	float32 damage;
};
