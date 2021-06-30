#ifndef D04_SMALLSCORPION_HPP
# define D04_SMALLSCORPION_HPP
# include "Enemy.hpp"

class SmallScorpion : virtual public Enemy
{
public:
	SmallScorpion();
	SmallScorpion(SmallScorpion const &);
	SmallScorpion &operator=(const SmallScorpion&);
	virtual ~SmallScorpion();
	virtual void takeDamage(int);
};


#endif
