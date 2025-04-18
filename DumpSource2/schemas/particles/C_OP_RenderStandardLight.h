class C_OP_RenderStandardLight
{
	ParticleLightTypeChoiceList_t m_nLightType;
	CParticleCollectionVecInput m_vecColorScale;
	ParticleColorBlendType_t m_nColorBlendType;
	CParticleCollectionFloatInput m_flIntensity;
	bool m_bCastShadows;
	CParticleCollectionFloatInput m_flTheta;
	CParticleCollectionFloatInput m_flPhi;
	CParticleCollectionFloatInput m_flRadiusMultiplier;
	StandardLightingAttenuationStyle_t m_nAttenuationStyle;
	CParticleCollectionFloatInput m_flFalloffLinearity;
	CParticleCollectionFloatInput m_flFiftyPercentFalloff;
	CParticleCollectionFloatInput m_flZeroPercentFalloff;
	bool m_bRenderDiffuse;
	bool m_bRenderSpecular;
	CUtlString m_lightCookie;
	int32 m_nPriority;
	ParticleLightFogLightingMode_t m_nFogLightingMode;
	CParticleCollectionRendererFloatInput m_flFogContribution;
	ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior;
	float32 m_flCapsuleLength;
	bool m_bReverseOrder;
	bool m_bClosedLoop;
	ParticleAttributeIndex_t m_nPrevPntSource;
	float32 m_flMaxLength;
	float32 m_flMinLength;
	bool m_bIgnoreDT;
	float32 m_flConstrainRadiusToLengthRatio;
	float32 m_flLengthScale;
	float32 m_flLengthFadeInTime;
};
