enum EOverworldAuditAction : uint32_t
{
	k_eOverworldAuditAction_Invalid = 0,
	k_eOverworldAuditAction_DevModifyTokens = 1,
	k_eOverworldAuditAction_DevClearInventory = 2,
	k_eOverworldAuditAction_DevGrantTokens = 3,
	k_eOverworldAuditAction_CompletePath = 4,
	k_eOverworldAuditAction_ClaimEncounterReward = 5,
	k_eOverworldAuditAction_DevResetNode = 6,
	k_eOverworldAuditAction_DevResetPath = 7,
	k_eOverworldAuditAction_MatchRewardsFull = 8,
	k_eOverworldAuditAction_MatchRewardsHalf = 9,
	k_eOverworldAuditAction_EventActionTokenGrant = 10,
	k_eOverworldAuditAction_TokenTraderLost = 11,
	k_eOverworldAuditAction_TokenTraderGained = 12,
	k_eOverworldAuditAction_EncounterRewardTokenCost = 13,
	k_eOverworldAuditAction_EncounterRewardTokenReward = 14,
	k_eOverworldAuditAction_SupportGrantTokens = 16,
	k_eOverworldAuditAction_TokenGiftSent = 17,
};
