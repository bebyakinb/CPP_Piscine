#ifndef D04_CHARACTER_HPP
# define D04_CHARACTER_HPP
# include "Enemy.hpp"
# include "AWeapon.hpp"
class Character
{
private:
	std::string _name;
	int 		_ap;
	AWeapon		*_weapon;

public:
	Character(std::string const &);
	Character();
	Character(const Character &);
	virtual ~Character();
	Character 	&operator=(const Character&other);

	void				recoverAP();
	void				equip(AWeapon*);
	void				attack(Enemy*);
	const std::string	&getName() const;
	int					getAP() const;
	AWeapon				*getWeapon() const;
};

std::ostream&		operator<<(std::ostream&, const Character &);

#endif
