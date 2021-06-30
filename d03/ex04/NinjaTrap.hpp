#ifndef D03_NINJATRAP_HPP
# define D03_NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
private:
	static const unsigned int	_defaultEnergyPoints = 120;
	static const unsigned int	_defaultMaxEnergyPoints = 120;
	static const unsigned int	_defaultMeleeAttackDamage = 60;
public:
	NinjaTrap();
	NinjaTrap(const std::string&);
	NinjaTrap(const NinjaTrap&);
	~NinjaTrap();
	NinjaTrap&					operator=(const NinjaTrap&);

	void						ninjaShoebox(NinjaTrap &);
	void						ninjaShoebox(FragTrap &);
	void						ninjaShoebox(ScavTrap &);
	void						ninjaShoebox(ClapTrap &);
	unsigned int				getDefaultEnergyPoints() const;
	unsigned int				getDefaultMaxEnergyPoints() const;
	unsigned int				getDefaultMeleeAttackDamage() const;
};

#endif //D03_NINJATRAP_HPP
