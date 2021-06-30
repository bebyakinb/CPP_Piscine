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


void				ScavTrap::printPrefix(void){
	std::cout << "SC4V-TP \033[1;31m" << _name << "\033[0m";
}

void 				ScavTrap::rangedAttack(std::string const & target){
	printPrefix();
	std::cout << " attacks " << target
			  << " at range, causing " << _rangedAttackDamage
			  << " points of damage!" << std::endl;
}

void				ScavTrap::meleeAttack(std::string const & target){
	printPrefix();
	std::cout << " attacks " << target
			  << " at melee, causing " << _meleeAttackDamage
			  << " points of damage!" << std::endl;
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

void				ScavTrap::takeDamage(unsigned int amount){
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

void				ScavTrap::beRepaired(unsigned int amount){
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

void				ScavTrap::challengeNewcomer(std::string const & target){
	pointerChallengeFunc cmnds[CHALLANGECOUNT] = {
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
	(this->*cmnds[rand() % CHALLANGECOUNT])(target);
	printPrefix();
	std::cout << " current energy(" << _energyPoints << ")" << std::endl;
}
