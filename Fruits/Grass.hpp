#include "Plant.hpp"
#pragma once
class Grass : public Plant
{
public:
	Grass(double minHeight, double maxHeight, int maxCrops, std::string name, std::string cropName) : Plant(minHeight, maxHeight, maxCrops, name, cropName) {}

};

