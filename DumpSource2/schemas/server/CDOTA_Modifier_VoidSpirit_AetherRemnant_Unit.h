class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public CDOTA_Buff
{
	Vector m_vFacingDir;
	CUtlVector< CHandle< CBaseEntity > > m_hWatchPathThinkers;
	CUtlVector< CHandle< CBaseEntity > > m_hShardWatchPathThinkers;
	ParticleIndex_t m_nBeamFXIndex;
	ParticleIndex_t m_nShardBeamFXIndex;
	ParticleIndex_t m_nHeroFXIndex;
	CUtlVector< int32 > m_nViewerIDs;
	int32 m_nViewerTeam;
	float32 remnant_watch_distance;
	float32 remnant_watch_radius;
	float32 duration;
	float32 watch_path_vision_radius;
	float32 impact_damage;
	float32 pull_duration;
	float32 activation_delay;
	bool m_bPiercesCreeps;
	CUtlVector< CHandle< CBaseEntity > > m_hAlreadyHit;
	bool bIsArtifice;
	float32 artifice_duration_override;
	float32 artifice_pct_effectiveness;
	bool m_bActivated;
	float32 m_flRotation;
	CHandle< CBaseEntity > m_hPartnerRemnant;
};
