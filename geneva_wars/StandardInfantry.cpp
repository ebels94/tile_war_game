#include "StandardInfantry.h"
StandardInfantry::StandardInfantry(int x, int y, int own, int tm) {
	x_coordinate = x;
	y_coordinate = y;
	owner = own;
	team = tm;
	remaining_hp = MAX_HP;
	remaining_movement = MAX_MOVEMENT;
	armour_type = Armour::LIGHT;
	primary_ammo = Ammunition::BULLETS;
	primary_ammo = Ammunition::EXPLOSIVE
}
StandardInfantry::StandardInfantry(int x, int y) {
	x_coordinate = x;
	y_coordinate = y;
	owner = 0;
	team = 0;
	remaining_hp = MAX_HP;
	remaining_movement = MAX_MOVEMENT;
	armour_type = Armour::LIGHT;
	primary_ammo = Ammunition::BULLETS;
	primary_ammo = Ammunition::EXPLOSIVE;
}

void StandardInfantry::primary_attack(int x, int y) {
	
}

void StandardInfantry::secondary_attack(int x, int y) {
	
}

std::vector<std::pair<int, int>> StandardInfantry::get_attack_tiles() {
	std::vector<std::pair<int, int>> attackable_tiles;
	int x_vals[5] = {x_coordinate-2, x_coordinate-1, x_coordinate, x_coordinate+1, x_coordinate+2};
	int y_vals[5] = {y_coordinate-2, y_coordinate-1, y_coordinate, y_coordinate+1, y_coordinate+2};
	for (int i = 0; i < 5; i++) {
		if (x_vals[i] >= 0 && x_vals[i] <= State::BOARD_WIDTH - 1) {
			for (int j = 0; j < 5; j++) {
				if (y_vals[j] >= 0 && y_vals[j] <= State::BOARD_HEIGHT - 1) {
					attackable_tiles.push_back(std::make_pair(y_vals[j], x_vals[i]));
				}
			}
		}
	}
	return attackable_tiles;
}

std::vector<std::pair<int, int>> StandardInfantry::get_movement_tiles() {
	std::vector<std::pair<int, int>> accessible_tiles;
	return accessible_tiles;
}