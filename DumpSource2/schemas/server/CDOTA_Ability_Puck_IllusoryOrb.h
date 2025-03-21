class CDOTA_Ability_Puck_IllusoryOrb
{
	int32 m_iProjectile;
	CountdownTimer m_ViewerTimer;
	int32 curve_orb;
	float32 m_fTimeRemaining;
	Vector m_vVectorTargetEndpoint;
	Vector m_vCurveAcceleration;
	Vector m_vStartPosition;
	float32 orb_vision;
	float32 max_distance;
	float32 vision_duration;
	int32 damage;
	CSoundPatch* m_pSoundPatch;
	ParticleIndex_t m_nCurvePathFXIndex;
};
