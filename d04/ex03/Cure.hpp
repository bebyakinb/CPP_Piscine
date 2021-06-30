#ifndef D04_CURE_HPP
# define D04_CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &);
	Cure 		&operator=(const Cure&);
	virtual AMateria* clone() const;
	void use(ICharacter& target);
};

#endif //D04_CURE_HPP
