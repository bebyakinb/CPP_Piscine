#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int		main(void){
	FragTrap frag1("FRAG-1");
	ScavTrap scav1("SCAV-1");

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

	scav1.rangedAttack("newcomer");
	scav1.meleeAttack("newcomer");
	scav1.takeDamage(10);
	scav1.takeDamage(10);
	scav1.takeDamage(20);
	scav1.takeDamage(-10);
	scav1.takeDamage(1000000);
	scav1.takeDamage(-111110);
	scav1.beRepaired(2);
	scav1.beRepaired(-2000);
	scav1.beRepaired(222);
	scav1.challengeNewcomer("newcomer");
	scav1.challengeNewcomer("newcomer");
	scav1.challengeNewcomer("newcomer");
	scav1.challengeNewcomer("newcomer");
	scav1.challengeNewcomer("newcomer");


}