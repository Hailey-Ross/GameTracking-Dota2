class CDOTA_Modifier_SandKing_SandStorm
{
	float32 sand_storm_radius;
	int32 sand_storm_damage;
	float32 damage_tick_rate;
	GameTime_t m_flLastDamageTime;
	ParticleIndex_t m_nSandStormParticleIndex1;
	ParticleIndex_t m_nSandStormParticleIndex2;
	CHandle< C_BaseEntity > m_hThinker;
	int32 sand_storm_move_speed_pct;
	Vector vecSpawnPos;
};
