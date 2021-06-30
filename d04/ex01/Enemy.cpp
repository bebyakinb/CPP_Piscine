#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){}

Enemy::Enemy(): _hp(0), _type("NoType"){
	//std::cout << "Default constructor of Enemy was called" << std::endl;
}

Enemy::~Enemy(){
	//std::cout << "Default destructor of Enemy was called" << std::endl;
}

Enemy::Enemy(const Enemy &other){
	_hp = other._hp;
	_type = other._type;
	//std::cout << "Copy constructor of Enemy was called" << std::endl;
}

Enemy 				&Enemy::operator=(const Enemy&other){
	if (this != &other){
		_hp = other._hp;
		_type = other._type;
	}
	//std::cout << "Assignment of Enemy was called" << std::endl;
	return *this;
}

const std::string	&Enemy::getType() const{
	return _type;
}

int					Enemy::getHP() const{
	return _hp;
}

void Enemy::setHP(int hp){
	_hp = hp; // Enemy::_hp = hp;
}

void				Enemy::takeDamage(int damage){
	if (damage < 0)
		return;
	if (damage > _hp)
		_hp = 0;
	else
		_hp = _hp - damage;
	std::cout << _type << " takes " << damage
			<< " points of damage. current HP= " << _hp;
}
