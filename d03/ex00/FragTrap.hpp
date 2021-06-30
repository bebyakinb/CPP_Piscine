#ifndef D03_FRAGTRAP_HPP
# define D03_FRAGTRAP_HPP
# define ATTACKSCOUNT 5
# include <iostream>

class FragTrap
{
private:
	void				printPrefix();
	unsigned int		_hitPoints;
	unsigned int		_maxHitPoints;
	int					_energyPoints;
	unsigned int		_maxEnergyPoints;
	unsigned int		_level;
	std::string			_name;
	unsigned int		_meleeAttackDamage;
	unsigned int		_rangedAttackDamage;
	unsigned int		_armorDamageReduction;

public:
	FragTrap();
	FragTrap(const std::string&);
	FragTrap(const FragTrap&);
	~FragTrap();
	FragTrap&	operator=(const FragTrap&);

	void 				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void 				randomAttack1(std::string const & target);
	void 				randomAttack2(std::string const & target);
	void 				randomAttack3(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				vaulthunter_dot_exe(std::string const & target);

};

#endif //D03_FRAGTRAP_HPP
