#include "phonebook.hpp"

int		ft_stoi(std::string const &text){
	int					num;
	long long			i;
	std::istringstream	iss(text);

	num = -1;
	iss >> num;
	if (!num){
		i = -1;
		while (text[++i]){
			if (text[i] != 9 && text[i] != 32)
				break;
		}
		while (text[i] == '0')
			i++;
		if (i < (long long)text.length())
			return (-1);
	}
	return (num);
}

void	add_cell_to_table(std::string str){
	if (str.length() <= 10){
		std::cout << std::setw(10);
		std::cout << str;
	}
	else
		std::cout << str.substr(0, 9) << ".";
	std::cout << '|';
}

void	print_header(void){
	std::cout << '|';
	add_cell_to_table("INDEX");
	add_cell_to_table("FIRST_NAME");
	add_cell_to_table("SECOND_NAME");
	add_cell_to_table("NICKNAME");
	std::cout << std::endl;
}

int		print_phonebook(Contact contacts[], int contacts_num){
	int i;

	if (!contacts_num){
		std::cout << "PHONEBOOK IS EMPTY!" << std::endl;
		return (0);
	}
	print_header();
	i = 0;
	while (i < contacts_num){
		std::cout << '|';
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << '|';
		add_cell_to_table(contacts[i].getF_name());
		add_cell_to_table(contacts[i].getL_name());
		add_cell_to_table(contacts[i].getNickname());
		std::cout << std::endl;
		i++;
	}
	return (1);

}

void	search(Contact contacts[], int contacts_num){
	std::string	buff;
	int			index;

	if (print_phonebook(contacts, contacts_num)){
		std::cout << "Put index: ";
		std::getline(std::cin, buff);
		index = ft_stoi(buff);
		if (index < 0 || index >= contacts_num)
		{
			std::cout << "BAD INDEX" << std::endl;
			return ;
		}
		contacts[index].print_contact();
	}
}