#ifndef D01_BRAIN_HPP
# define D01_BRAIN_HPP
# include <string>
# include <iostream>
# include <sstream>

class Brain
{
private:
	std::string	_address;
public:
	Brain();
	~Brain();
	std::string identify(void) const;
};


#endif //D01_BRAIN_HPP
