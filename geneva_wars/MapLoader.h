#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "GlobalState.h"
class MapLoader
{
public:
	void load_map(std::string map_path);
	void print_map();
private:
};

