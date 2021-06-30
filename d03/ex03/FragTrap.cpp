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
