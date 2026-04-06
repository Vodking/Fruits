#include "Crop.hpp"

class BlueBerry : public Crop 
{ 
public:
	BlueBerry(std::string name) : Crop(0.2, 0.5, 8, 12, name) {} 

};