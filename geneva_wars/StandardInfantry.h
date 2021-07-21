#pragma once
#include "Unit.h"
#define MAX_HP 50
#define MAX_MOVEMENT 7;
class StandardInfantry : public Unit
{
public:
	StandardInfantry(int x, int y, int own, int tm);
	StandardInfantry(int x, int y);
	void primary_attack(int x, int y);
	void secondary_attack(int x, int y);
	std::vector<std::pair<int, int>> get_attack_tiles();
	std::vector<std::pair<int, int>> get_movement_tiles();
private:
};

