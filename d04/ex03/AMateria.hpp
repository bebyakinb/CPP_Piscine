#ifndef D04_AMATERIA_HPP
# define D04_AMATERIA_HPP
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	std::string	_type;
	unsigned	int _xp;
protected:
	AMateria();
public:
	AMateria(std::string const &);
	AMateria(const AMateria&);
	AMateria 		&operator=(const AMateria&);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //D04_AMATERIA_HPP
