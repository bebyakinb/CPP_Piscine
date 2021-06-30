#include <string>
#include "iostream"
int main(void)
{
	std::string *ptr;
	std::string	str;

	str = "HI THIS IS BRAIN";
	ptr = &str;
	std::string	&ref = str;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}