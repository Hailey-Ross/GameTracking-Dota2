class CDOTA_Modifier_Gyrocopter_Call_Down : public CDOTA_Buff
{
	int32 slow_duration;
	int32 damage;
	float32 radius;
	int32 slow;
	bool m_bDelayed;
	bool m_bAttachToRocket1;
	CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes;
	bool m_bHitInvisibleHeroes;
	ParticleIndex_t m_nMarkerIndex;
	bool m_bIsTrackingMissile;
	CHandle< CBaseEntity > m_hTrackingTarget;
};
