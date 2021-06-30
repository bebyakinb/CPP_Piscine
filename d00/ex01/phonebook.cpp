#include "phonebook.hpp"

int 	execute_command(std::string command, Contact contacts[],
				  int *current_contact){
	if (!(command.compare("ADD"))){
		if (*current_contact < PHONEBOOK_SIZE)
			add_contact(contacts, current_contact);
		else
			std::cout << "YOUR PHONEBOOK IS FULL!" << std::endl;
	}
	else if (!(command.compare("SEARCH")))
		search(contacts, *current_contact);
	else if (!(command.compare("EXIT")))
		return (1);
	else
		std::cout << "WRONG COMMAND!" << std::endl;
	return (0);
}

int		main(void){
	Contact		phonebook[PHONEBOOK_SIZE];
	int         current_contact;
	std::string	command;

	current_contact = 0;
	while (1){
		std::cout << '>';
		std::getline (std::cin, command);
		if (execute_command(command, phonebook, &current_contact))
			break;
	}
	return (0);
}