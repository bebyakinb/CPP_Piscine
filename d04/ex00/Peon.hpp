#ifndef D04_PEON_HPP
# define D04_PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon();
	Peon(std::string const &);
	Peon(Peon const &);
	Peon &operator=(const Peon&);
	virtual ~Peon();
	virtual void getPolymorphed() const;
};


#endif //D04_PEON_HPP
