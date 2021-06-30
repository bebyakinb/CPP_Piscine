#ifndef D04_POWERFIST_HPP
# define D04_POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &);
	PowerFist &operator=(const PowerFist&);
	virtual ~PowerFist();

	virtual void attack() const;
};

#endif
