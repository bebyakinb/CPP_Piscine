#ifndef D04_TACTICALMARINE_HPP
# define D04_TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	TacticalMarine 		&operator=(const TacticalMarine&);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif //D04_TACTICALMARINE_HPP
