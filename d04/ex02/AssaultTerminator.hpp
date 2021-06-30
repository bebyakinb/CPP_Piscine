#ifndef D04_ASSAULTTERMINATOR_HPP
# define D04_ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator 		&operator=(const AssaultTerminator&);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};



#endif //D04_ASSAULTTERMINATOR_HPP
