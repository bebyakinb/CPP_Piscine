#include "phonebook.hpp"

void		add_contact(Contact contacts[PHONEBOOK_SIZE], int *current_contact){
	Contact     temp;

	temp.setIndex(*current_contact);
	temp.fill_contact();
	if (!temp.compare(Contact::empty_contact()))
	{
		std::cout << "EMPTY CONTACT" << std::endl;
	}
	else
	{
		contacts[(*current_contact)++] = temp;
		std::cout << "CONTACT CREATED!" << std::endl;
	}
}