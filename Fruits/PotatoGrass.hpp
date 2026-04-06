#include "Grass.hpp"
#include "Potato.hpp"
#pragma once
class PotatoGrass : public Grass
{
public:
	PotatoGrass(std::string name, std::string cropName) : Grass(50, 70, 25, name, cropName) { GenerateCrops(); }


protected: 
	void GenerateCrops() override
	{
		int randCrops = rand() % maxCrops_;
		for (int i = 0; i < randCrops; i++)
		{
			crops_.push_back(Potato(cropName_));
		}
	}
};

