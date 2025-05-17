// MNetworkVarNames = "CHandle< CBaseEntity> m_hPrimary"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hSecondary"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hTertiary"
// MNetworkVarNames = "CHandle< CBaseEntity> m_hFourth"
class CDOTA_Ability_Brewmaster_PrimalSplit : public CDOTABaseAbility
{
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPrimary;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hSecondary;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTertiary;
	// MNetworkEnable
	CHandle< CBaseEntity > m_hFourth;
	GameTime_t m_fHurlBoulder_CooldownTime;
	GameTime_t m_fHDispelMagic_CooldownTime;
	GameTime_t m_fCyclone_CooldownTime;
	GameTime_t m_fWindWalk_CooldownTime;
	GameTime_t m_fAstralPulse_CooldownTime;
};
