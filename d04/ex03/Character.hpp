#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# define N_SLOTS 4
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria*	_materiaSlots[N_SLOTS];
public:
	Character();
	Character(const std::string &);
	Character(const Character &);
	virtual ~Character();
	Character 					&operator=(const Character&);

	virtual std::string const	&getName() const;
	void						init_slots();
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};


#endif //CHARACTER_HPP
