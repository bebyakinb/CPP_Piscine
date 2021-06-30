#ifndef D04_RADSCORPION_HPP
# define D04_RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &);
	RadScorpion &operator=(const RadScorpion&);
	virtual ~RadScorpion();
	virtual void takeDamage(int);
};


#endif
