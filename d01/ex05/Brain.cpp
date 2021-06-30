#include "Brain.hpp"

Brain::Brain(){
	std::stringstream ss;
	ss << this;
	_address = ss.str();
	return;
}

Brain::~Brain(){
	return;
}

std::string Brain::identify(void) const{
	return std::string(this->_address);
}
