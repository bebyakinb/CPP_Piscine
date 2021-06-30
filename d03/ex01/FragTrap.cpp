#include "FragTrap.hpp"
typedef void (FragTrap::*pointerAttackFunc)(std::string const & target);

FragTrap::FragTrap(){
	_name = "default FRAG";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_level = 1;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a FR4G-TP steward "
			  << "robot, but my friends call me "	<< _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

FragTrap::FragTrap(const std::string &name){
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_level = 1;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a FR4G-TP steward "
			  << "robot, but my friends call me "	<< _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

FragTrap::FragTrap(const FragTrap& other){
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;

}

FragTrap&	FragTrap::operator=(const FragTrap& other){
	if(this == &other)
		return *this;
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	return *this;
}

FragTrap::~FragTrap(){
	printPrefix();
	std::cout << ": OH GOD NO I WON'T! AAHHHHHH!" << std::endl;
}


void				FragTrap::printPrefix(void){
	std::cout << "FR4G-TP \033[1;31m" << _name << "\033[0m";
}

void 				FragTrap::rangedAttack(std::string const & target){
	printPrefix();
	std::cout << " attacks " << target
			  << " at range, causing " << _rangedAttackDamage
			  << " points of damage!" << std::endl;
}


void 				FragTrap::randomAttack1(std::string const & target){
	printPrefix();
	std::cout << " randomly attacks " << target
			  << " at range, causing " << _rangedAttackDamage
			  << " points of damage!" << std::endl;
}

void 				FragTrap::randomAttack2(std::string const & target){
	printPrefix();
	std::cout << " randomly attacks " << target
			  << " at range, causing " << _rangedAttackDamage
			  << " points of damage!!" << std::endl;
}

void 				FragTrap::randomAttack3(std::string const & target){
	printPrefix();
	std::cout << " randomly attacks " << target
			  << " at range, causing " << _rangedAttackDamage
			  << " points of damage!!!" << std::endl;
}


void			FragTrap::meleeAttack(std::string const & target){
	printPrefix();
	std::cout << " attacks " << target
			  << " at melee, causing " << _meleeAttackDamage
			  << " points of damage!" << std::endl;
}

void				FragTrap::takeDamage(unsigned int amount){
	if (amount <= _armorDamageReduction)
		amount = 0;
	else
		amount = amount - _armorDamageReduction;
	if (amount > _hitPoints)
		amount = _hitPoints;
	_hitPoints = _hitPoints - amount;
	printPrefix();
	std::cout << " takes " << amount
			  << " points of damage. Current HP : " << _hitPoints << std::endl;
	printPrefix();
	std::cout << ": OW!" << std::endl;
}

void				FragTrap::beRepaired(unsigned int amount){
	if (amount < 0)
		amount = 0;
	else if (amount > _maxHitPoints - _hitPoints)
		amount = _maxHitPoints - _hitPoints;
	_hitPoints = _hitPoints + amount;
	printPrefix();
	std::cout << " repairs " << amount
			  << " HP. Current HP : " << _hitPoints << std::endl;
	printPrefix();
	std::cout << ": WOW!" << std::endl;
}

void				FragTrap::vaulthunter_dot_exe(std::string const & target){
	pointerAttackFunc cmnds[ATTACKSCOUNT] = {
			&FragTrap::rangedAttack,
			&FragTrap::meleeAttack,
			&FragTrap::randomAttack1,
			&FragTrap::randomAttack2,
			&FragTrap::randomAttack3
	};
	if (_energyPoints - 25 < 0){
		printPrefix();
		std::cout << " not enough energy(" << _energyPoints << ")" << std::endl;
		return ;
	}
	_energyPoints = _energyPoints - 25;
	(this->*cmnds[rand() % ATTACKSCOUNT])(target);
	printPrefix();
	std::cout << " current energy(" << _energyPoints << ")" << std::endl;
}
