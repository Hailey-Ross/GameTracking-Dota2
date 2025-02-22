class CBaseModelEntity
{
	CRenderComponent* m_CRenderComponent;
	CHitboxComponent m_CHitboxComponent;
	HitGroup_t m_nDestructiblePartInitialStateDestructed0;
	HitGroup_t m_nDestructiblePartInitialStateDestructed1;
	HitGroup_t m_nDestructiblePartInitialStateDestructed2;
	HitGroup_t m_nDestructiblePartInitialStateDestructed3;
	HitGroup_t m_nDestructiblePartInitialStateDestructed4;
	int32 m_nDestructiblePartInitialStateDestructed0_PartIndex;
	int32 m_nDestructiblePartInitialStateDestructed1_PartIndex;
	int32 m_nDestructiblePartInitialStateDestructed2_PartIndex;
	int32 m_nDestructiblePartInitialStateDestructed3_PartIndex;
	int32 m_nDestructiblePartInitialStateDestructed4_PartIndex;
	HitGroup_t m_LastHitGroup;
	GameTime_t m_flDissolveStartTime;
	CEntityIOOutput m_OnIgnite;
	int32 m_iViewerID;
	int32 m_iTeamVisibilityBitmask;
	RenderMode_t m_nRenderMode;
	bool m_bVisibilityDirtyFlag;
	int16[10] m_iFOWTempViewerID;
	RenderFx_t m_nRenderFX;
	bool m_bAllowFadeInView;
	Color m_clrRender;
	CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes;
	bool m_bRenderToCubemaps;
	bool m_bNoInterpolate;
	CCollisionProperty m_Collision;
	CGlowProperty m_Glow;
	float32 m_flGlowBackfaceMult;
	float32 m_fadeMinDist;
	float32 m_fadeMaxDist;
	float32 m_flFadeScale;
	float32 m_flShadowStrength;
	uint8 m_nObjectCulling;
	int32 m_nAddDecal;
	Vector m_vDecalPosition;
	Vector m_vDecalForwardAxis;
	float32 m_flDecalHealBloodRate;
	float32 m_flDecalHealHeightRate;
	CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo;
	CNetworkViewOffsetVector m_vecViewOffset;
};
