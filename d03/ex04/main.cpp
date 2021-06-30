#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void){
	FragTrap	frag1("FRAG-1");
	ScavTrap	scav1("SCAV-1");
	NinjaTrap	ninja1("NINJA-1");
	SuperTrap	super1("super - 1");

	super1.rangedAttack("newcomer");
	super1.meleeAttack("newcomer");
	super1.takeDamage(10);
	super1.takeDamage(10);
	super1.takeDamage(20);
	super1.takeDamage(-10);
	super1.takeDamage(1000000);
	super1.takeDamage(-111110);
	super1.beRepaired(2);
	super1.beRepaired(-2000);
	super1.beRepaired(222);
	super1.ninjaShoebox(ninja1);
	super1.ninjaShoebox(frag1);
	super1.ninjaShoebox(scav1);
}
