#ifndef D03_FRAGTRAP_HPP
# define D03_FRAGTRAP_HPP
# define ATTACKSCOUNT 5
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string&);
	FragTrap(const FragTrap&);
	~FragTrap();
	FragTrap&	operator=(const FragTrap&);

	void 				randomAttack1(std::string const & target);
	void 				randomAttack2(std::string const & target);
	void 				randomAttack3(std::string const & target);
	void				vaulthunter_dot_exe(std::string const & target);
};

#endif //D03_FRAGTRAP_HPP
