#include <iostream>
#include "whatever.hpp"

class
Awesome {
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int _n;
};

std::ostream 			&operator<<(std::ostream &os, Awesome const &inst)
{
	os << inst._n;
	return (os);
}

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "--------END OF SUBJECT PART---------------" << std::endl;

	Awesome a1(4);
	Awesome a2(5);
	std::cout << "a1 = " << a1 << ", a2 = " << a2 << std::endl;
	::swap( a1, a2 );
	std::cout << "a = " << a1 << ", a2 = " << a2 << std::endl;
	std::cout << "min( a1, a2 ) = " << ::min( a1, a2 ) << std::endl;
	std::cout << "max( a1, a2 ) = " << ::max( a1, a2 ) << std::endl;

	return 0;
}
