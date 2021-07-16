#pragma once
#include "GlobalState.h"
class Weapon
{
public:
	Ammunition get_ammo_type() { return ammunition_type; };
	virtual void find_targets(unsigned int x, unsigned int y) = 0;
	virtual void attack_target(unsigned int x, unsigned int y) = 0;
private:
	Ammunition ammunition_type;
	unsigned int base_damage;
	unsigned int top_damage;
};

