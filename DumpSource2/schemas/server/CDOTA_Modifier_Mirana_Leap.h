class CDOTA_Modifier_Mirana_Leap : public CDOTA_Buff
{
	float32 m_flTotalTime;
	float32 m_flInitialVelocity;
	Vector m_vStartPosition;
	Vector m_vTargetHorizontalDirection;
	float32 m_flCurrentTimeHoriz;
	float32 m_flCurrentTimeVert;
	bool m_bInterrupted;
	Vector m_vFaceDirection;
	int32 leap_distance;
	float32 leap_speed;
	float32 leap_acceleration;
	int32 leap_radius;
	float32 leap_bonus_duration;
	bool m_bLaunched;
};
