#include "Fixed.class.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	Fixed d;
	Fixed e;

	c = b;
	d.setRawBits(666);
	e = d;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;
	std::cout << e.getRawBits() << std::endl;
	return (0);
}
