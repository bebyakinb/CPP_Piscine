#include "PowerFist.hpp"
#include "SuperPowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SmallScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	std::cout << "b HP = :" << b->getHP() << std::endl;

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << "b HP = :" << b->getHP() << std::endl;
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << "b HP = :" << b->getHP() << std::endl;
	std::cout << *me;
	me->attack(b);
	std::cout << "b HP = :" << b->getHP() << std::endl;
	std::cout << *me;
	
	delete pr;
	delete pf;
	delete me;

	std::cout << std::endl << "-----------ADDITIONAL PART-------------"
			  << std::endl << std::endl;
	
	Character* me1 = new Character("me1");
	std::cout << *me1;
	Enemy* b1 = new SmallScorpion();
	Enemy* b2 = new SmallScorpion();
	AWeapon* pf1 = new SuperPowerFist();
	
	std::cout << "b1 HP = :" << b1->getHP() << std::endl;
	std::cout << "b2 HP = :" << b2->getHP() << std::endl;
	me->equip(pf1);
	me->attack(b1);
	std::cout << "b1 HP = :" << b1->getHP() << std::endl;
	std::cout << *me1;
	me->attack(b1);
	std::cout << "b1 HP = :" << b1->getHP() << std::endl;
	std::cout << *me1;
	me->attack(b2);
	std::cout << "b2 HP = :" << b2->getHP() << std::endl;
	std::cout << *me1;
	me->attack(b2);
	std::cout << "b2 HP = :" << b2->getHP() << std::endl;
	std::cout << *me1;
	

	me1->recoverAP();
	std::cout << *me1;
	me1->recoverAP();
	std::cout << *me1;
	me1->recoverAP();
	std::cout << *me1;
	me1->recoverAP();
	std::cout << *me1;
	me1->recoverAP();
	std::cout << *me1;
	
	std::cout << "b1 HP = :" << b1->getHP() << std::endl;
	if (b1->getHP() > 0)
		delete b1;
	std::cout << "b2 HP = :" << b2->getHP() << std::endl;
	if (b2->getHP() > 0)
		delete b2;
	delete pf1;
	delete me1;
	return (0);

}