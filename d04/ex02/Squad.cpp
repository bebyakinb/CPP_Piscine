#include "Squad.hpp"

Squad::Squad() : _count(0), _marines(NULL){
	//std::cout << "Default constructor of Squad was called" << std::endl;
}

Squad::~Squad(){
	int i;
	if (_count > 0 && _marines){
		i = 0;
		while (i < _count){
			if (_marines[i])
				delete _marines[i];
			i++;
		}
		delete [] _marines;
	}
	//std::cout << "Default destructor of Squad was called" << std::endl;
}

Squad::Squad(const Squad &other){
	*this = other;
	//std::cout << "Copy constructor of Squad was called" << std::endl;
}

Squad 			&Squad::operator=(const Squad&other){
	int i;

	if (this != &other){
		if (_count > 0 && _marines){
			i = 0;
			while (i < _count){
				if (_marines[i])
					delete _marines[i];
				i++;
			}
			delete [] _marines;
		}
		_count = other._count;
		_marines = new ISpaceMarine * [_count];
		i = 0;
		while (i < _count){
			_marines[i] = other._marines[i]->clone();
			i++;
		}
	}
	//std::cout << "Assignment of Squad was called" << std::endl;
	return *this;
}

int				Squad::getCount() const{
	return _count;
}


ISpaceMarine*	Squad::getUnit(int num) const{
	if (num < 0 || num >= _count)
		return (NULL);
	return (_marines[num]);
}

int				Squad::isMarineInSquad(ISpaceMarine* marine) const{
	int i;

	i = 0;
	while (_marines && i < _count){
		if(_marines[i] == marine)
			return (1);
		i++;
	}
	return (0);
}

int				Squad::push(ISpaceMarine* newMarine){
	ISpaceMarine **tmp;
	int i;

	if (!newMarine || isMarineInSquad(newMarine))
		return (-1);
	if (!_marines){
		_marines = new ISpaceMarine* [1];
		_marines[0] = newMarine;
		_count = 1;
	}
	else {
		_count += 1;
		tmp = _marines;
		_marines = new ISpaceMarine* [_count + 1];
		i = 0;
		while (i < _count - 1){
			_marines[i] = tmp[i];
			i++;
		}
		//copyMarines(tmp, _marines, _count - 1);
		delete [] tmp;
		_marines[_count - 1] = newMarine;
		_marines[_count] = NULL;
	}
	return (_count);
}
