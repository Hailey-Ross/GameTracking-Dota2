class CDOTA_Ability_Broodmother_StickySnare : public CDOTABaseAbility
{
	Vector m_vEndpoint;
	float32 duration;
	float32 width;
	bool m_bStolenSnareCheck;
	CUtlVector< CHandle< CBaseEntity > > m_vecSnares;
};
