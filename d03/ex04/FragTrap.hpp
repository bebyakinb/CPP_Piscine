#ifndef D03_FRAGTRAP_HPP
# define D03_FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	static const unsigned int	_defaultHitPoints = 100;
	static const unsigned int	_defaultMaxHitPoints = 100;
	static const unsigned int	_defaultRangedAttackDamage = 20;
	static const unsigned int	_defaultArmorDamageReduction = 5;
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
	unsigned int		getHitPoints() const;
	unsigned int		getMaxHitPoints() const;
	unsigned int		getRangedAttackDamage() const;
	unsigned int		getArmorDamageReduction() const;
};

#endif //D03_FRAGTRAP_HPP
