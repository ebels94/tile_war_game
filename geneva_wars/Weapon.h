#pragma once
#include "GlobalState.h"
class Weapon
{
public:
	Ammunition get_ammo_type() { return ammunition_type; };
	//virtual void find_targets(unsigned int x, unsigned int y) = 0;
	virtual void attack_target(unsigned int starting_x, unsigned int starting_y, unsigned int target_x, unsigned int target_y) = 0;
	Ammunition ammunition_type;
	unsigned int base_damage;
	unsigned int top_damage;
private:
	
};

