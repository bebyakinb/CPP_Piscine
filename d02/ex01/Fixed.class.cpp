#include "Fixed.class.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
	return ;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	_rawBits = other.getRawBits();
	return ;
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	_rawBits = value << _fractionalBits;
	return ;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	_rawBits = (int)(value * (1 << _fractionalBits));
	return ;
}


Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&				Fixed::operator=(const Fixed&value){
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = value.getRawBits();
	return (*this);
}

int					Fixed::getRawBits() const{
	//std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

void				Fixed::setRawBits( int const value){
	//std::cout << "setRawBits member function called" << std::endl;
	_rawBits = value;
	return ;
}

int					Fixed::getFractionalBits() const{
	return _fractionalBits;
}

int					Fixed::toInt(void) const{
	return _rawBits >> _fractionalBits;
}

float				Fixed::toFloat(void) const{
	return ((float)_rawBits / (float)(1 << _fractionalBits));
}

std::ostream&			operator<<(std::ostream& os, const Fixed &val){
	os << val.toFloat();
	return(os);
}
