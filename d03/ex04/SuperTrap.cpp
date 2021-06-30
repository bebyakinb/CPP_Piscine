#include "SuperTrap.hpp"

SuperTrap::SuperTrap(){
	_name = "Default SuperTrap";
	_hitPoints = this->FragTrap::getHitPoints();
	_maxHitPoints = this->FragTrap::getMaxHitPoints();
	_energyPoints = this->NinjaTrap::getDefaultEnergyPoints();
	_maxEnergyPoints = this->NinjaTrap::getDefaultMaxEnergyPoints();
	_level = 1;
	_meleeAttackDamage = this->NinjaTrap::getDefaultMeleeAttackDamage();
	_rangedAttackDamage = this->FragTrap::getRangedAttackDamage();
	_armorDamageReduction = this->FragTrap::getArmorDamageReduction();
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a SUPER-TP steward "
			  << "robot, but my friends call me " << _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

SuperTrap::SuperTrap(const std::string &name){
	_name = name;
	_hitPoints = this->FragTrap::getHitPoints();
	_maxHitPoints = this->FragTrap::getMaxHitPoints();
	_energyPoints = this->NinjaTrap::getDefaultEnergyPoints();
	_maxEnergyPoints = this->NinjaTrap::getDefaultMaxEnergyPoints();
	_level = 1;
	_meleeAttackDamage = NinjaTrap::getDefaultMeleeAttackDamage();
	_rangedAttackDamage = FragTrap::getRangedAttackDamage();
	_armorDamageReduction = FragTrap::getArmorDamageReduction();
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a SUPER-TP steward "
			  << "robot, but my friends call me " << _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other){
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

SuperTrap::~SuperTrap(){
	std::cout << "Child class destructor was called" << std::endl;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& other){
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
