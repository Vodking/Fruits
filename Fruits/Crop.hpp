#include "Header.hpp"
#pragma once
class Crop
{
protected:
	double weight_;
	std::string color_;
	std::string name_;

public:

	Crop(double min_weight, double max_weight, int min_color, int max_color, std::string name)
	{
		int rand_num = min_color + rand() % max_color;
		weight_ = min_weight + (max_weight - min_weight) * ((double)rand() / RAND_MAX);
		name_ = name;
		
		switch (rand_num)
		{
			case 0: color_ = "Красный"; break;
			case 1: color_ = "КрасноЖёлтый"; break;
			case 2: color_ = "Оранжевый"; break;
			case 3: color_ = "ЖёлтоОранжевый"; break;
			case 4: color_ = "Жёлтый"; break;
			case 5: color_ = "ЖёлтоЗелёный"; break;
			case 6: color_ = "Зелёный"; break;
			case 7: color_ = "СинеЗелёный"; break;
			case 8: color_ = "Синий"; break;
			case 9: color_ = "СинеРозовый"; break;
			case 10: color_ = "Розовый"; break;
			case 11: color_ = "ФиолетовоРозовый"; break;
			case 12: color_ = "Фиолетовый"; break;
			case 13: color_ = "Коричневый"; break;
			case 14: color_ = "ЖёлтоКоричневый"; break;
		}
			
		
		
	}

	double GetWeight() { return weight_; }
	std::string GetColor() { return color_; }
	std::string GetName() { return name_; }

};
