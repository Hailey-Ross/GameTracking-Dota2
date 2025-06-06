class CFuncMover : public CBaseModelEntity
{
	CUtlSymbolLarge m_iszPathName;
	CHandle< CPathMover > m_hPathMover;
	CUtlSymbolLarge m_iszPathNodeStart;
	CUtlSymbolLarge m_iszPathNodeEnd;
	CFuncMover::Move_t m_eMoveType;
	bool m_bIsReversing;
	Vector m_vTarget;
	float32 m_flStartSpeed;
	float32 m_flPathLocation;
	float32 m_flT;
	int32 m_nCurrentNodeIndex;
	int32 m_nPreviousNodeIndex;
	SolidType_t m_eSolidType;
	bool m_bIsMoving;
	float32 m_flTimeToReachMaxSpeed;
	float32 m_flDistanceToReachMaxSpeed;
	float32 m_flTimeToReachZeroSpeed;
	float32 m_flDistanceToReachZeroSpeed;
	GameTime_t m_flTimeMovementStart;
	GameTime_t m_flTimeMovementStop;
	CHandle< CMoverPathNode > m_hStopAtNode;
	float32 m_flPathLocationToBeginStop;
	CUtlSymbolLarge m_iszStartForwardSound;
	CUtlSymbolLarge m_iszLoopForwardSound;
	CUtlSymbolLarge m_iszStopForwardSound;
	CUtlSymbolLarge m_iszStartReverseSound;
	CUtlSymbolLarge m_iszLoopReverseSound;
	CUtlSymbolLarge m_iszStopReverseSound;
	CUtlSymbolLarge m_iszArriveAtDestinationSound;
	CEntityIOOutput m_OnMovementEnd;
	bool m_bStartAtClosestPoint;
	bool m_bStartAtEnd;
	CFuncMover::OrientationUpdate_t m_eOrientationUpdate;
	GameTime_t m_flTimeStartOrientationChange;
	float32 m_flTimeToBlendToNewOrientation;
	float32 m_flDurationBlendToNewOrientationRan;
	int32 m_nOriginalOrientationIndex;
	bool m_bCreateMovableNavMesh;
	bool m_bAllowMovableNavMeshDockingOnEntireEntity;
	CEntityIOOutput m_OnNodePassed;
	CUtlSymbolLarge m_iszOrientationMatchEntityName;
	CHandle< CBaseEntity > m_hOrientationMatchEntity;
	float32 m_flTimeToTraverseToNextNode;
	Vector m_vLerpToNewPosStartInPathEntitySpace;
	Vector m_vLerpToNewPosEndInPathEntitySpace;
	float32 m_flLerpToPositionT;
	float32 m_flLerpToPositionDeltaT;
	CEntityIOOutput m_OnLerpToPositionComplete;
	bool m_bIsPaused;
	CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction;
	int32 m_nDelayedTeleportToNode;
	bool m_bIsVerboseLogging;
	CHandle< CBaseEntity > m_hFollowEntity;
	float32 m_flFollowDistance;
	float32 m_flFollowMinimumSpeed;
	float32 m_flCurFollowEntityT;
	float32 m_flCurFollowSpeed;
	CEntityIOOutput m_OnStart;
	CEntityIOOutput m_OnStartForward;
	CEntityIOOutput m_OnStartReverse;
	CEntityIOOutput m_OnStop;
	CEntityIOOutput m_OnStopped;
	bool m_bNextNodeReturnsCurrent;
	bool m_bStartedMoving;
};
