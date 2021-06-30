#ifndef D01_ZOMBIE_HPP
# define D01_ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie{
private:
	std::string	_name;
	std::string	_type;
public:
	Zombie();
	~Zombie();

	const std::string &getName() const;
	const std::string &getType() const;
	void setName(const std::string &name);
	void setType(const std::string &type);
	void announce(void) const;
};


#endif //D01_ZOMBIE_HPP
