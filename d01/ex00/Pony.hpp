#ifndef D01_PONY_HPP
# define D01_PONY_HPP
# include <string>
# include <iostream>

class Pony{
private:
	int			_igogo_num;
	std::string	_name;
public:
	Pony(std::string name, int igogo_num);
	~Pony(void);

	void				igogo() const;
};

#endif //D01_PONY_HPP
