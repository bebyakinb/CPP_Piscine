#include "FragTrap.hpp"

int		main(void){
	FragTrap frag1("FRAG-1");

	frag1.rangedAttack("enemy");
	frag1.meleeAttack("enemy");
	frag1.takeDamage(10);
	frag1.takeDamage(10);
	frag1.takeDamage(20);
	frag1.takeDamage(-10);
	frag1.takeDamage(1000000);
	frag1.takeDamage(-111110);
	frag1.beRepaired(2);
	frag1.beRepaired(-2000);
	frag1.beRepaired(222);
	frag1.vaulthunter_dot_exe("enemy");
	frag1.vaulthunter_dot_exe("enemy");
	frag1.vaulthunter_dot_exe("enemy");
	frag1.vaulthunter_dot_exe("enemy");
	frag1.vaulthunter_dot_exe("enemy");
	frag1.vaulthunter_dot_exe("enemy");
	frag1.vaulthunter_dot_exe("enemy");
	frag1.vaulthunter_dot_exe("enemy");
}