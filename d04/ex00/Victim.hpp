#ifndef D04_VICTIM_HPP
# define D04_VICTIM_HPP
# include <iostream>

class Victim
{
protected:
	std::string _name;
public:
	Victim();
	Victim(Victim const &);
	Victim(std::string const &);
	Victim &operator=(const Victim&);
	virtual ~Victim();

	virtual void getPolymorphed() const;

	const std::string &getName() const;
};

std::ostream&		operator<<(std::ostream&, const Victim &);

#endif //D04_VICTIM_HPP
