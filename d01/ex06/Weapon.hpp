#ifndef D01_WEAPON_HPP
# define D01_WEAPON_HPP
# include <string>
# include <iostream>
class Weapon
{
private:
	std::string _type;
public:
	Weapon(const std::string &type);
	virtual ~Weapon();

	const std::string getType() const;
	void setType(const std::string &type);
};

#endif //D01_WEAPON_HPP
