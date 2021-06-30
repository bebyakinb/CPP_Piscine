#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "OldPeon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std:: cout << "-----------------------------------" << std::endl;

	OldPeon bob("Bob");
	std::cout << robert << jim << bob;
	robert.polymorph(jim);
	robert.polymorph(bob);

	return 0;
}