#include "Plant.hpp"
#pragma once
class Tree : public Plant
{
public:
	Tree(double minHeight, double maxHeight, int maxCrops, std::string name, std::string cropName) : Plant(minHeight, maxHeight, maxCrops, name, cropName) {}
};

