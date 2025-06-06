class CResponseQueue::CDeferredResponse
{
	CResponseCriteriaSet m_contexts;
	GameTime_t m_flDispatchTime;
	CHandle< CBaseEntity > m_hIssuer;
	CTypedBitVec< 64 > m_recipientBitVec;
	CRR_Response m_response;
	bool m_bResponseValid;
};
