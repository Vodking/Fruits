#include "Tree.hpp"
#include "Apple.hpp"
#pragma once
class AppleTree : public Tree
{
public:
	AppleTree(std::string name, std::string cropName) : Tree(6000, 10000, 50, name, cropName) 
	{
		GenerateCrops();
	}

protected:
	void GenerateCrops() override
	{
		int randCrops = rand() % maxCrops_;
		for (int i = 0; i < randCrops; i++)
		{
			crops_.push_back(Apple(cropName_));
		}
	}
};

