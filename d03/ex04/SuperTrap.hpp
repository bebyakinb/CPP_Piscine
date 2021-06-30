#ifndef D03_SUPERTRAP_HPP
# define D03_SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string&);
	SuperTrap(const SuperTrap&);
	~SuperTrap();
	SuperTrap&			operator=(const SuperTrap&);
	unsigned int		getRangeAttackDamage() const;

};

#endif //D03_SUPERTRAP_HPP
