#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"
# define PHONEBOOK_SIZE 8

typedef struct s_phonebook{
    Contact *contacts[PHONEBOOK_SIZE];
    int     current_num;
} t_phonebook;

void	search(Contact contacts[], int contacts_num);
void	add_contact(Contact contacts[PHONEBOOK_SIZE], int *current_contact);

#endif