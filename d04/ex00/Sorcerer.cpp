#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){
	_name = "Harry Potter";
	_title = "Wizzard";
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title) :
					_name(name), _title(title){
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other){
	*this = other;
}

Sorcerer::~Sorcerer(){
	std::cout << _name << ", " << _title
			  << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer 			&Sorcerer::operator=(const Sorcerer&other){
	if (this == &other)
		return *this;
	this->_name = other._name;
	this->_title = other._title;
	return *this;
}

void 				Sorcerer::polymorph(Victim const &other) const{
	other.getPolymorphed();
}

const std::string	&Sorcerer::getName() const{
	return _name;
}

const std::string	&Sorcerer::getTitle() const{
	return _title;
}

std::ostream&			operator<<(std::ostream& os, const Sorcerer &wiz){
	os << "I am " << wiz.getName() << " ," << wiz.getTitle()
		<< ", and I like ponies!" << std::endl;
	return(os);
}
