#include "Bush.hpp"
#include "Blueberry.hpp"
#pragma once
class BlueberryBush : public Bush
{
public:
	BlueberryBush(std::string name, std::string cropName) : Bush(10, 50, 65, name, cropName) {
		GenerateCrops();
	}

protected:
	void GenerateCrops() override
	{
		int randCrops = rand() % maxCrops_;
		for (int i = 0; i < randCrops; i++)
		{
			crops_.push_back(BlueBerry(cropName_));
		}
	}
};

