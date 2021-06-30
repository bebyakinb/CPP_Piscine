#ifndef D04_AWEAPON_HPP
# define D04_AWEAPON_HPP
# include <iostream>

class AWeapon
{
private:
	std::string _name;
	int 		_apcost;
	int			_damage;
	AWeapon();
	AWeapon(const AWeapon &other);
public:
	AWeapon &operator=(const AWeapon&);
	AWeapon(const std::string &name, int apcost, int damage);
	virtual ~AWeapon();
	const std::string 		&getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void		attack() const = 0;
};

#endif
