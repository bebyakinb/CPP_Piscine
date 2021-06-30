

#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return (0);
}

/*
int main()
{
	int i = 0;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	ISpaceMarine *joe = jim->clone();
	ISpaceMarine *barry = bob->clone();
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(joe);
	vlc->push(barry);
	i = 0;
	while (i < vlc->getCount()){
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << "______________" << std::endl;
		i++;
	}
	Squad *second = new Squad;
	Squad *copy = new Squad;
	copy->push(bob->clone());
	copy->push(joe->clone());
	copy->push(jim->clone());
	*second = *copy;
	delete vlc;
	delete copy;
	i = 0;
	while(i < second->getCount()){
		ISpaceMarine* cur = second->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << "______________" << std::endl;
		i++;
	}
	delete second;
	return (0);
}
*/