class CDOTA_Ability_Seasonal_PartyHat : public CDOTABaseAbility
{
	CUtlVector< ParticleIndex_t > m_vecParticles;
	CUtlVector< CHandle< CBaseEntity > > m_hAffectedEntities;
	int32 m_nAllyCount;
	Vector m_vTargetPos;
};
