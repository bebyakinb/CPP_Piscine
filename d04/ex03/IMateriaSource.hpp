#ifndef D04_IMATERIASOURCE_HPP
# define D04_IMATERIASOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //D04_IMATERIASOURCE_HPP
