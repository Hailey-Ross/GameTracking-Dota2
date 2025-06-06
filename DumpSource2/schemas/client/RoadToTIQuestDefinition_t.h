// MGetKV3ClassDefaults (UNKNOWN FOR PARSER)
// MPropertyAutoExpandSelf
class RoadToTIQuestDefinition_t
{
	// MPropertyDescription = "unique integer ID of this Road To TI quest within the challenge"
	RoadToTIQuestID_t m_unID;
	// MPropertyDescription = "Quest type (match or player)"
	ERoadToTIQuestType m_eQuestType;
	// MPropertyDescription = "Period the quest represents"
	uint32 m_unPeriod;
	// MPropertyDescription = "Match ID for match quests"
	MatchID_t m_unMatchID;
	// MPropertyDescription = "Series ID for match quests"
	uint32 m_unSeriesID;
	// MPropertyDescription = "League ID for match quests"
	uint32 m_unLeagueID;
	// MPropertyDescription = "Player account ID for player quests"
	uint32 m_unPlayerID;
	// MPropertyDescription = "Team ID of the player or match winner"
	uint32 m_unTeamID;
	// MPropertyDescription = "Heroes available for the quest"
	CUtlVector< HeroID_t > m_vecHeroes;
	// MPropertyDescription = "True if this is a developer quest"
	bool m_bDeveloper;
};
