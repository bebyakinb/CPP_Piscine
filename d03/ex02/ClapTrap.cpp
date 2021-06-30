#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	_name = "Default clapTrap";
	std::cout << "Parent class default constructor was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	std::cout << "Parent class copy constructor was called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Parent class destuctor was called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other){
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

void				ClapTrap::printPrefix(void){
	std::cout << "CL4P-TP \033[1;31m" << _name << "\033[0m";
}

void 				ClapTrap::rangedAttack(std::string const & target){
	printPrefix();
	std::cout << " attacks " << target
			  << " at range, causing " << _rangedAttackDamage
			  << " points of damage!" << std::endl;
}


void				ClapTrap::meleeAttack(std::string const & target){
	printPrefix();
	std::cout << " attacks " << target
			  << " at melee, causing " << _meleeAttackDamage
			  << " points of damage!" << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount){
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

void				ClapTrap::beRepaired(unsigned int amount){
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
