#include "ScavTrap.hpp"
typedef void (ScavTrap::*pointerChallengeFunc)(std::string const & target);

ScavTrap::ScavTrap(){
	_name = "default SCAV";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a SC4V-TP steward "
			  << "robot, but my friends call me "	<< _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

ScavTrap::ScavTrap(const std::string &name){
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a SC4V-TP steward "
			  << "robot, but my friends call me "	<< _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other){
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

ScavTrap&	ScavTrap::operator=(const ScavTrap& other){
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

ScavTrap::~ScavTrap(){
	printPrefix();
	std::cout << ": OH GOD NO I WON'T! AAHHHHHH!" << std::endl;
}

void 				ScavTrap::challange1(std::string const & target){
	printPrefix();
	std::cout << " : There's two chairs... Which one you'll choose, my dear "
			  << target << std::endl;
}

void 				ScavTrap::challange2(std::string const & target){
	printPrefix();
	std::cout << " : There's three chairs... Which one you'll choose, my dear "
			  << target << std::endl;
}

void 				ScavTrap::challange3(std::string const & target){
	printPrefix();
	std::cout << " : There's four chairs... Which one you'll choose, my dear "
			  << target << std::endl;
}

void				ScavTrap::challengeNewcomer(std::string const & target){
	pointerChallengeFunc cmnds[] = {
			&ScavTrap::challange1,
			&ScavTrap::challange2,
			&ScavTrap::challange3
	};
	if (_energyPoints - 25 < 0){
		printPrefix();
		std::cout << " not enough energy(" << _energyPoints << ")" << std::endl;
		return ;
	}
	_energyPoints = _energyPoints - 25;
	(this->*cmnds[rand() % 5])(target);
	printPrefix();
	std::cout << " current energy(" << _energyPoints << ")" << std::endl;
}
