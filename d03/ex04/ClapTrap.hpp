#ifndef D03_CLAPTRAP_HPP
#define D03_CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
	unsigned int		_hitPoints;
	unsigned int		_maxHitPoints;
	int					_energyPoints;
	unsigned int		_maxEnergyPoints;
	unsigned int		_level;
	std::string			_name;
	unsigned int		_meleeAttackDamage;
	unsigned int		_rangedAttackDamage;
	unsigned int		_armorDamageReduction;
	void				printPrefix();
public:
	ClapTrap();
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap&);

	void 				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	const std::string	&getName() const;

};

#endif //D03_CLAPTRAP_HPP
