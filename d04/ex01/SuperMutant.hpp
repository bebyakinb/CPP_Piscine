#ifndef D04_SUPERMUTANT_HPP
# define D04_SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : virtual public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &);
	SuperMutant &operator=(const SuperMutant&);
	virtual ~SuperMutant();

	virtual void takeDamage(int);
};

#endif
