class CDOTA_Modifier_WitchDoctor_DeathWard : public CDOTA_Buff
{
	int32 bonus_damage;
	int32 bonus_accuracy;
	int32 bonus_attack_range;
	bool m_bFirstAttack;
	int32 initial_target_count;
	int32 secondary_attack_damage_pct;
};
