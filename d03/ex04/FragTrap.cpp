#include "FragTrap.hpp"
typedef void (FragTrap::*pointerAttackFunc)(std::string const & target);

FragTrap::FragTrap(){
	_name = "default FRAG";
	_hitPoints = _defaultHitPoints;
	_maxHitPoints = _defaultMaxHitPoints;
	_energyPoints = 100;
	_level = 1;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = _defaultRangedAttackDamage;
	_armorDamageReduction = _defaultArmorDamageReduction;
	printPrefix();
	std::cout << " Allow me to introduce myself -- I am a FR4G-TP steward "
			  << "robot, but my friends call me "	<< _name
			  << "! Or they would, if any of them were still alive" <<
			  std::endl;
}

FragTrap::FragTrap(const std::string &name){
	_name = name;
	_hitPoints = _defaultHitPoints;
	_maxHitPoints = _defaultMaxHitPoints;
	_energyPoints = 100;
	_level = 1;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = _defaultRangedAttackDamage;
	_armorDamageReduction = _defaultArmorDamageReduction;
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
	std::cout << "Parent class FragTrap destructor was called" << std::endl;
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
	int		attack_num;

	if (_energyPoints - 25 < 0){
		printPrefix();
		std::cout << " not enough energy(" << _energyPoints << ")" << std::endl;
		return ;
	}
	_energyPoints = _energyPoints - 25;
	attack_num = rand() % 5;
	if (attack_num == 0)
		rangedAttack(target);
	else if (attack_num == 1)
		meleeAttack(target);
	else if (attack_num == 2)
		randomAttack1(target);
	else if (attack_num == 3)
		randomAttack2(target);
	else
		randomAttack3(target);
	printPrefix();
	std::cout << " current energy(" << _energyPoints << ")" << std::endl;
}

unsigned int		FragTrap::getHitPoints() const{
	return _defaultHitPoints;
}

unsigned int		FragTrap::getMaxHitPoints() const{
	return _defaultMaxHitPoints;
}

unsigned int		FragTrap::getArmorDamageReduction() const{
	return _defaultArmorDamageReduction;
}

unsigned int		FragTrap::getRangedAttackDamage() const{
	return _defaultRangedAttackDamage;
}
