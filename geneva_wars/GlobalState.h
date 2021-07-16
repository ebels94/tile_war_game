#pragma once



enum class Topography { FLATLAND, HILL, MOUNTAIN, HIGH_MOUNTAIN, WATER };
enum class TerrainFeature { GRASSLAND, MARSHLAND, DESERT, SNOWY, FOREST };
enum class TerrainHazard { SAFE, ON_FIRE, POISONED };
enum class Armour { LIGHT, MEDIUM, HEAVY };
enum class Ammunition { BULLETS, FIRE, ARMOUR_PIERCING, EXPLOSIVE, BIOLOGICAL };


struct State {
	inline static unsigned int VBO;
	inline static unsigned int VAO;
	inline static unsigned int EBO;
};