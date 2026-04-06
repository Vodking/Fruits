#include "Header.hpp"
#include "Crop.hpp"
#pragma once

class Plant
{
public:
	Plant(double minHeight, double maxHeight, int maxCrops, std::string name, std::string cropName)
	{
		height_ = minHeight + (maxHeight - minHeight) * ((double)rand() / RAND_MAX);
		maxCrops_ = maxCrops;
		name_ = name;
		cropName_ = cropName;

	}

	bool CropAvailable()
	{
		if (crops_.size() > 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	virtual Crop Harvest()
	{
		Crop buffer = crops_[crops_.size()];
		crops_.pop_back();
		return buffer;
	}
protected:
	double maxHeight_;
	double minHeight_;
	double height_;
	int maxCrops_;
	std::string name_;
	std::string cropName_;
	std::vector<Crop> crops_;

	virtual void GenerateCrops()
	{
		int randCrops = rand() % maxCrops_;
		for (int i = 0; i < randCrops; i++)
		{
			crops_.push_back(Crop(0, 0, 0, 0, "1"));
		}
	}
};

