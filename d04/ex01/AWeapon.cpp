#include "AWeapon.hpp"

AWeapon::AWeapon(){
	//std::cout << "Default constructor of AWeapon was called" << std::endl;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
				_name(name), _apcost(apcost), _damage(damage){
	//std::cout << "Main constructor of AWeapon was called" << std::endl;
}

AWeapon::~AWeapon(){
	//std::cout << "Default destructor of AWeapon was called" << std::endl;
}

AWeapon::AWeapon(const AWeapon &other){
	_name = other._name;
	_apcost = other._apcost;
	_damage = other._damage;
	//std::cout << "Copy constructor of AWeapon was called" << std::endl;
}

AWeapon &		AWeapon::operator=(const AWeapon&other){
	if (this != &other){
		_name = other._name;
		_apcost = other._apcost;
		_damage = other._damage;
	}
	//std::cout << "Assignment of AWeapon was called" << std::endl;
	return *this;
}

const std::string		 	&AWeapon::getName() const{
	return _name;
}

int					AWeapon::getAPCost() const{
	return _apcost;
}

int					AWeapon::getDamage() const{
	return _damage;
}
