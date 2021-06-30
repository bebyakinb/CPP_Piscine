#include "Pony.hpp"

void	ponyOnTheHeap(const std::string name, int igogo_num){
	Pony *new_pony = new Pony(name, igogo_num);
	new_pony->igogo();
	delete new_pony;
}

void	ponyOnTheStack(const std::string name, int igogo_num){
	Pony new_pony(name, igogo_num);
	new_pony.igogo();
}

int	main(void)
{
	ponyOnTheHeap("on-the-heap", 12);
	ponyOnTheStack("on-the-stack", 5);
	return (1);
}

