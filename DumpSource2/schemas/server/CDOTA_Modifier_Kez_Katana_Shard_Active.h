class CDOTA_Modifier_Kez_Katana_Shard_Active : public CDOTA_Buff
{
	GameTime_t m_StunTime;
	CHandle< CBaseEntity > m_hTarget;
	bool m_bStunned;
};
