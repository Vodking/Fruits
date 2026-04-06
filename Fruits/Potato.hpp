#include "Crop.hpp"

class Potato : public Crop 
{ 
public:
	Potato(std::string name) : Crop(138.0, 299.0, 13, 14, name) {} 
};