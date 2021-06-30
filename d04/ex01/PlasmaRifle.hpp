#ifndef D04_PLASMARIFLE_HPP
# define D04_PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	PlasmaRifle &operator=(const PlasmaRifle&);
	virtual ~PlasmaRifle();

	virtual void attack() const;
};

#endif
