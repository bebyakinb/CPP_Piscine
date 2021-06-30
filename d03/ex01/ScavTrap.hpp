//
// Created by Endell Noelia on 3/11/21.
//

#ifndef D03_SCAVTRAP_HPP
# define D03_SCAVTRAP_HPP
# define CHALLANGECOUNT 3
# include <iostream>

class ScavTrap
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
	ScavTrap();
	ScavTrap(const std::string&);
	ScavTrap(const ScavTrap&);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap&);

	void 				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void 				challange1(std::string const & target);
	void 				challange2(std::string const & target);
	void 				challange3(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				challengeNewcomer(std::string const & target);
};

#endif //D03_SCAVTRAP_HPP
