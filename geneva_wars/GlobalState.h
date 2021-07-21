#pragma once
#include <utility>
#include <memory>
#include <iostream>
#define MAX_BOARD_HEIGHT 30
#define MAX_BOARD_WIDTH 30

enum class Topography { FLATLAND, HILL, MOUNTAIN, HIGH_MOUNTAIN, WATER };
enum class Biome { GRASSLAND, MARSHLAND, DESERT, SNOWY, FOREST };
enum class Weather {NO_WEATHER, RAINY, SNOWY};
enum class Hazard { SAFE, ON_FIRE, POISONED };
enum class Armour { LIGHT, MEDIUM, HEAVY };
enum class Ammunition { BULLETS, FIRE, ARMOUR_PIERCING, EXPLOSIVE, BIOLOGICAL };



struct Tile {
	unsigned int x_coordinate;
	unsigned int y_coordinate;
	Topography topography;
	Biome biome;
	Weather weather;
	Hazard hazard;
	//Unit* occupier;
};

struct State {
	inline static unsigned int VBO;
	inline static unsigned int VAO;
	inline static unsigned int EBO;
	inline static unsigned int BOARD_HEIGHT;
	inline static unsigned int BOARD_WIDTH;
	inline static Tile GAME_BOARD[MAX_BOARD_HEIGHT][MAX_BOARD_WIDTH];
};

