// MNetworkVarNames = "CHandle< CBaseEntity> m_hPrimary"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hSecondary"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hTertiary"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hFourth"
class C_DOTA_Ability_Brewmaster_PrimalSplit : public C_DOTABaseAbility
{
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPrimary;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hSecondary;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTertiary;
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hFourth;
	GameTime_t m_fHurlBoulder_CooldownTime;
	GameTime_t m_fHDispelMagic_CooldownTime;
	GameTime_t m_fCyclone_CooldownTime;
	GameTime_t m_fWindWalk_CooldownTime;
	GameTime_t m_fAstralPulse_CooldownTime;
};
