class CDOTA_Modifier_Shadow_Demon_Disruption : public CDOTA_Buff
{
	float32 m_flHealth;
	float32 m_flDisseminate_Duration;
	CHandle< CBaseEntity > m_hDisseminateAbility;
	ParticleIndex_t m_nFXIndex;
};
