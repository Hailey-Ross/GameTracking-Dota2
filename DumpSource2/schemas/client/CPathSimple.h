// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames = "CPathQueryComponent::Storage_t m_CPathQueryComponent"
// MNetworkVarNames = "CUtlString m_pathString"
class CPathSimple : public C_BaseEntity
{
	// MNetworkEnable
	// MNetworkUserGroup = "CPathQueryComponent"
	// MNetworkAlias = "CPathQueryComponent"
	// MNetworkTypeAlias = "CPathQueryComponent"
	CPathQueryComponent m_CPathQueryComponent;
	// MNetworkEnable
	CUtlString m_pathString;
};
