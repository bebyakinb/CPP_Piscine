#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void){
	FragTrap frag1("FRAG-1");
	ScavTrap scav1("SCAV-1");
	NinjaTrap ninja1("NINJA-1");
	ClapTrap clap1;

	ninja1.rangedAttack("newcomer");
	ninja1.meleeAttack("newcomer");
	ninja1.takeDamage(10);
	ninja1.takeDamage(10);
	ninja1.takeDamage(20);
	ninja1.takeDamage(-10);
	ninja1.takeDamage(1000000);
	ninja1.takeDamage(-111110);
	ninja1.beRepaired(2);
	ninja1.beRepaired(-2000);
	ninja1.beRepaired(222);
	ninja1.ninjaShoebox(ninja1);
	ninja1.ninjaShoebox(frag1);
	ninja1.ninjaShoebox(scav1);
	ninja1.ninjaShoebox(clap1);
}
