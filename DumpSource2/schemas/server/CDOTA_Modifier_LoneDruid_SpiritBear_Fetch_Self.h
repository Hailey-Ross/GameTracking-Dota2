class CDOTA_Modifier_LoneDruid_SpiritBear_Fetch_Self
{
	int32 self_slow;
	ParticleIndex_t m_nFXIndex;
	CHandle< CBaseEntity > m_hTarget;
	bool m_bFetchingRune;
	Vector m_vPreviousLoc;
	int32 drag_distance;
	int32 break_distance;
};
