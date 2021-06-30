#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	init_slots();
}

MateriaSource::~MateriaSource(){
	int i;

	i = 0;
	while (i < M_SLOTS){
		if (_materiaSlots[i])
			delete _materiaSlots[i];
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other){
	int i;

	init_slots();
	i = 0;
	while (i < M_SLOTS){
		if (other._materiaSlots[i])
			_materiaSlots[i] = other._materiaSlots[i]->clone();
		i++;
	}
	//std::cout << "Copy constructor of MateriaSource was called" << std::endl;
}

MateriaSource 		&MateriaSource::operator=(const MateriaSource&other){
	int i;

	i = 0;
	while (i < M_SLOTS){
		if (_materiaSlots[i])
			delete (_materiaSlots[i]);
		if (other._materiaSlots[i])
			_materiaSlots[i] = other._materiaSlots[i]->clone();
		i++;
	}
	return (*this);
}

void 			MateriaSource::init_slots(){
	int i;

	i = 0;
	while (i < M_SLOTS){
		this->_materiaSlots[i] = NULL;
		i++;
	}
}

void			MateriaSource::learnMateria(AMateria* m){
	int i;

	i = 0;
	while (i < M_SLOTS){
		if (!(_materiaSlots[i])){
			_materiaSlots[i] = m;
			return;
		}
		i++;
	}
}

AMateria*		MateriaSource::createMateria(std::string const & type){
	int i;

	i = 0;
	while (i < M_SLOTS) {
		if (_materiaSlots[i] && _materiaSlots[i]->getType() == type)
			return (_materiaSlots[i]->clone());
		i++;
	}
	return (0);
}
