#include <iostream>
#include <ctype.h>

void	megaphone(char **strs, int strs_count, int first_str){
	int i;
	int j;

	i = first_str;
	while (i < strs_count){
		j = 0;
		while ((strs[i][j]))
			std::cout << (char)toupper(strs[i][j++]);
		i++;
	}
	std::cout << std::endl;
}

int		main(int argc, char **args){
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		megaphone(args, argc, 1);
	return (1);
}
