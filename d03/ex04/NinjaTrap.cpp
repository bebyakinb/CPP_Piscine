#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){
	_name = "default ninja";
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = _defaultEnergyPoints;
	_level = 1;
	_maxEnergyPoints = _defaultMaxEnergyPoints;
	_meleeAttackDamage = _defaultMeleeAttackDamage;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a FR4G-TP steward "
			  << "robot, but my friends call me "	<< _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

NinjaTrap::NinjaTrap(const std::string &name){
	_name = name;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = _defaultEnergyPoints;
	_level = 1;
	_maxEnergyPoints = _defaultMaxEnergyPoints;
	_meleeAttackDamage = _defaultMeleeAttackDamage;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a NINJ4-TP steward "
			  << "robot, but my friends call me "	<< _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other){
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

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& other){
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

NinjaTrap::~NinjaTrap(){
	std::cout << "Parent class NinjaTrap destructor was called" << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &trap){
	printPrefix();
	std::cout << ": \'special ninja attack by " << trap.getName() << "\'"
			  << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &trap){
	printPrefix();
	std::cout << ": \'special frag attack by " << trap.getName() << "\'"
			  << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &trap){
	printPrefix();
	std::cout << ": \'special scav attack by " << trap.getName() << "\'"
			  << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &trap){
	printPrefix();
	std::cout << ": \'special clap attack by " << trap.getName() << "\'"
			  << std::endl;
}

unsigned int	NinjaTrap::getDefaultEnergyPoints() const{
	return _defaultEnergyPoints;
}

unsigned int	NinjaTrap::getDefaultMaxEnergyPoints() const{
	return _defaultMaxEnergyPoints;
}

unsigned int	NinjaTrap::getDefaultMeleeAttackDamage() const{
	return _defaultMeleeAttackDamage;
}
