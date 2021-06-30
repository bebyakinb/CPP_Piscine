#include "Character.hpp"

Character::Character(): _name("default name"){
	init_slots();
}

Character::Character(const std::string &name) : _name(name){
	init_slots();
}

Character::~Character(){}

Character::Character(const Character &other){
	int i;

	init_slots();
	i = 0;
	while (other._materiaSlots[i]){
		_materiaSlots[i] = other._materiaSlots[i]->clone();
		i++;
	}
	//std::cout << "Copy constructor of Character was called" << std::endl;
}

Character 		&Character::operator=(const Character&other){
	int i;

	i = 0;
	while (i < N_SLOTS){
		if (_materiaSlots[i])
			delete (_materiaSlots[i]);
		if (other._materiaSlots[i])
			_materiaSlots[i] = other._materiaSlots[i]->clone();
		i++;
	}
	return (*this);
}

void			Character::equip(AMateria* m){
	int i;

	i = 0;
	while (i < N_SLOTS){
		if (!(_materiaSlots[i])){
			_materiaSlots[i] = m;
			std::cout << "The slot " << i << " equiped with " << m->getType()
					  << std::endl;
			return;
		}
		i++;
	}
}

void			Character::unequip(int idx){
	if (idx < 0 || idx >= N_SLOTS){
		std::cout << "Wrong index" << std::endl;
	}
	else if (!_materiaSlots[idx]){
		std::cout << "Slot " << idx << " is clean" << std::endl;
	}
	else{
		std::cout << "Slot " << idx <<" was unequiped" << std::endl;
		_materiaSlots[idx] = NULL;
	}

}

void			Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx >= N_SLOTS){
		std::cout << "Wrong index" << std::endl;
	}
	else if (!_materiaSlots[idx]){
		std::cout << "Slot " << idx << " is empty" << std::endl;
	}
	else{
		_materiaSlots[idx]->use(target);
	}
}

void 			Character::init_slots(){
	int i;

	i = 0;
	while (i < N_SLOTS){
		this->_materiaSlots[i] = NULL;
		i++;
	}
}

std::string const	&Character::getName() const{
	return (_name);
}