#ifndef D04_SuperPowerFist_HPP
# define D04_SuperPowerFist_HPP
# include "AWeapon.hpp"

class SuperPowerFist : virtual public AWeapon
{
public:
	SuperPowerFist();
	SuperPowerFist(const SuperPowerFist &);
	SuperPowerFist &operator=(const SuperPowerFist&);
	virtual ~SuperPowerFist();

	virtual void attack() const;
};

#endif
