class CDOTA_Modifier_Item_Slime_Vial_Thinker
{
	float32 m_fCurRadius;
	GameTime_t m_fLastThink;
	CUtlVector< CHandle< C_BaseEntity > > m_entitiesHit;
	CountdownTimer m_ViewerTimer;
	int32 spill_speed;
	int32 spill_radius;
	int32 spill_damage;
	float32 spill_debuff_duration;
};
