#include "Crop.hpp"

class Apple : public Crop 
{ 
public:
	Apple(std::string name) : Crop(150, 250, 0, 6, name) {} 

};
