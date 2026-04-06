#include "Plant.hpp"
#pragma once
class Bush : public Plant
{
public:
	Bush(double minHeight, double maxHeight, int maxCrops, std::string name, std::string cropName) : Plant(minHeight, maxHeight, maxCrops, name, cropName) {}
};

