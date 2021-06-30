#include "Human.hpp"

std::string Human::identify(void) const
{
	return _brain.identify();
}

const Brain &Human::getBrain() const
{
	return _brain;
}
