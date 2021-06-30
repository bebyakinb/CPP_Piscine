#ifndef D01_HUMAN_HPP
# define D01_HUMAN_HPP
# include "Brain.hpp"

class Human
{
private:
	const Brain	_brain;
public:
	std::string	identify(void) const;
	const Brain &getBrain() const;
};

#endif //D01_HUMAN_HPP
