#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std:: cout << "-----------------------------------" << std::endl;
	IMateriaSource* src_2 = new MateriaSource();
	src_2->learnMateria(new Ice());
	src_2->learnMateria(new Cure());
	ICharacter* true_me = new Character("true_me");
	AMateria* buf;
	buf = src_2->createMateria("ice");
	true_me->equip(buf);
	buf = src_2->createMateria("ice");
	true_me->equip(buf);
	AMateria *tmp_2;
	buf = src_2->createMateria("cure");
	true_me->equip(buf);
	tmp_2 = buf;
	buf = src_2->createMateria("ice");
	true_me->equip(buf);
	buf = src_2->createMateria("cure");
	true_me->equip(buf);
	ICharacter* bocal = new Character("bocal");
	true_me->use(0, *bocal);
	true_me->use(2, *bocal);
	true_me->use(-2, *bocal);
	true_me->use(5, *bocal);
	true_me->unequip(2);
	true_me->use(2, *bocal);

	delete buf;
	delete tmp_2;
	delete bocal;
	delete true_me;
	delete src_2;

	return (0);
}