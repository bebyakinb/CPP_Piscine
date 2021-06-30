#include "Character.hpp"


Character::Character() : _name("noname"), _ap(40), _weapon(NULL){
	//std::cout << "Default constructor of Character was called" << std::endl;
}

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL){
	//std::cout << "Main constructor of Character was called" << std::endl;
}

Character::~Character(){
	//std::cout << "Default destructor of Character was called" << std::endl;
}

Character::Character(const Character &other){
	_name = other._name;
	_ap = other._ap;
	_weapon = other._weapon;
	//std::cout << "Copy constructor of Character was called" << std::endl;
}

Character 				&Character::operator=(const Character&other){
	if (this != &other){
		_name = other._name;
		_ap = other._ap;
		_weapon = other._weapon;
	}
	//std::cout << "Assignment of Character was called" << std::endl;
	return *this;
}

std::string const	&Character::getName() const{
	return _name;
}

int			Character::getAP() const{
	return _ap;
}

AWeapon		*Character::getWeapon() const{
	return _weapon;
}

void		Character::equip(AWeapon *weapon){
	if (_weapon != weapon)
		_weapon = weapon;
}

void Character::recoverAP(){
	_ap = _ap + 10;
	if (_ap > 40)
		_ap = 40;
	std::cout << _name << " AP was recovered up to " << _ap << std::endl;
}

void		Character::attack(Enemy *enemy){
	if (_weapon && enemy && enemy->getHP() > 0){
		if (_ap < _weapon->getAPCost()){
			std::cout << "Not enough AP need :"
					  <<_weapon->getAPCost() << ", current :" << _ap << std::endl;
			return;
		}
		std::cout << _name << " attacks " << enemy->getType() << " with a "
				  << _weapon->getName() << std::endl;
		//std::cout << "enemy HP" << enemy->getHP() << std::endl;
		//std::cout << "weapen" << _weapon->getName() << std::endl;
		_weapon->attack();
		_ap = _ap - _weapon->getAPCost();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() == 0)
		{
			delete enemy;
			enemy = NULL;
		}
	}
}

std::ostream&		operator<<(std::ostream& os, const Character &person){
	if (person.getWeapon())
		os << person.getName() << " has " << person.getAP() << " AP and wields a "
		   << person.getWeapon()->getName() << std::endl;
	else
		os << person.getName() << " has " << person.getAP()
		   << " AP  and is unarmed" << std::endl;
	return(os);
}
