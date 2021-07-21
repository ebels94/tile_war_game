#pragma once
#include <vector>
#include "GlobalState.h"
#include "Weapon.h"
class Unit
{
public:
	unsigned int get_owner() { return owner; };
	unsigned int get_team() { return team; };
	//unsigned int get_max_hp() { return max_hp; };
	unsigned int get_remaining_hp() { return remaining_hp; };
    //unsigned int get_max_movement() { return max_movement; };
	unsigned int get_remaining_movement() { return remaining_movement; };
	Armour get_armour_type() { return armour_type; };
	Weapon* get_primary_weapon() { return primary_weapon; };
	Weapon* get_secondary_weapon() { return secondary_weapon; };
	virtual void primary_attack(int x, int y) = 0;
	virtual void secondary_attack(int x, int y) = 0;
	virtual std::vector<std::pair<int, int>> get_attack_tiles() = 0;
	virtual std::vector<std::pair<int, int>> get_movement_tiles() = 0;
	int x_coordinate;
	int y_coordinate;
	int owner;
	int team;
	int remaining_hp;
	int remaining_movement;
	Weapon* primary_weapon;
	Weapon* secondary_weapon;
	Ammunition primary_ammo;
	Ammunition secondary_ammo;
	Armour armour_type;
private:

};

