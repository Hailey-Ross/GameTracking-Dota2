class CDOTA_Modifier_Beastmaster_WildAxes : public CDOTA_Buff
{
	Vector m_vLeftControl;
	Vector m_vRightControl;
	Vector m_vTargetLoc;
	Vector m_vSourceLoc;
	float32 m_flAxeDuration;
	GameTime_t m_flAxeDieTime;
	bool m_bReturning;
	bool m_bCatchingAxes;
	CUtlVector< CHandle< C_BaseEntity > > m_hAxes;
	ParticleIndex_t[2] m_nAxeFXIndex;
	CUtlVector< CHandle< C_BaseEntity > >[2] m_hHitList;
	float32 radius;
	float32 spread;
	float32 axe_damage;
	float32 duration;
	float32 min_throw_duration;
	float32 max_throw_duration;
};
