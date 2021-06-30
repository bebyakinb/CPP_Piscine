#ifndef D03_NINJATRAP_HPP
# define D03_NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(const std::string&);
	NinjaTrap(const NinjaTrap&);
	~NinjaTrap();
	NinjaTrap&	operator=(const NinjaTrap&);

	void		ninjaShoebox(NinjaTrap &);
	void		ninjaShoebox(FragTrap &);
	void		ninjaShoebox(ScavTrap &);
	void		ninjaShoebox(ClapTrap &);
};

#endif //D03_NINJATRAP_HPP
