#ifndef D04_ICE_HPP
# define D04_ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &);
	Ice 		&operator=(const Ice&);
	virtual AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //D04_ICE_HPP
