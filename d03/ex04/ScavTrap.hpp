#ifndef D03_SCAVTRAP_HPP
# define D03_SCAVTRAP_HPP
# define CHALLANGECOUNT 3
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string&);
	ScavTrap(const ScavTrap&);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap&);

	void 				challange1(std::string const & target);
	void 				challange2(std::string const & target);
	void 				challange3(std::string const & target);
	void				challengeNewcomer(std::string const & target);
};

#endif //D03_SCAVTRAP_HPP
