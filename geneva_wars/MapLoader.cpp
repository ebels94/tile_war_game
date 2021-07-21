#include "MapLoader.h"


void MapLoader::load_map(std::string map_path) {
	std::ifstream mapFile;
	mapFile.open(map_path);
	mapFile >> State::BOARD_HEIGHT >> State::BOARD_WIDTH;
	int topography, biome, weather, hazard;
	for (int i = 0; i < State::BOARD_HEIGHT; i++) {
		for (int j = 0; j < State::BOARD_WIDTH; j++) {
			mapFile >> topography >> biome >> weather >> hazard;
			State::GAME_BOARD[i][j].topography = (Topography)topography;
			State::GAME_BOARD[i][j].biome = (Biome)biome;
			State::GAME_BOARD[i][j].weather = (Weather)weather;
			State::GAME_BOARD[i][j].hazard = (Hazard)hazard;
		}
	}
	mapFile.close();
}
void MapLoader::print_map() {
	std::string tops[5] = { "FLATLAND", "HILL", "MOUNTAIN", "HIGH_MOUNTAIN", "WATER" };
	std::string biomes[5] = { "GRASSLAND", "MARSHLAND", "DESERT", "SNOWY", "FOREST" };
	std::string weather[3] = { "NO_WEATHER", "RAINY", "SNOWY" };
	std::string hazards[3] = { "SAFE", "ON_FIRE", "POISONED" };

	for (int i = 0; i < State::BOARD_HEIGHT; i++) {
		for (int j = 0; j < State::BOARD_WIDTH; j++) {
			std::cout << "{" << tops[(int)State::GAME_BOARD[i][j].topography] << ","
				<< biomes[(int)State::GAME_BOARD[i][j].biome] << ","
				<< weather[(int)State::GAME_BOARD[i][j].weather] << ","
				<< hazards[(int)State::GAME_BOARD[i][j].hazard] << "}  ";
		}
		std::cout << std::endl;
	}
}

