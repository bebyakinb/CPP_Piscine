#ifndef D04_SORCERER_HPP
# define D04_SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer();
public:
	Sorcerer(const Sorcerer&);
	Sorcerer(std::string const &, std::string const &);
	Sorcerer &operator=(const Sorcerer&);
	virtual ~Sorcerer();

	void polymorph(Victim const &) const;

	const std::string &getName() const;
	const std::string &getTitle() const;
};

std::ostream&		operator<<(std::ostream&, const Sorcerer &);

#endif //D04_SORCERER_HPP
