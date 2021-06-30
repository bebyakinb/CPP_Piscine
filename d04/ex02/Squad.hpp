#ifndef D04_SQUAD_HPP
# define D04_SQUAD_HPP
# include "ISquad.hpp"
# include <iostream>

class Squad: public ISquad
{
private:
	int				_count;
	ISpaceMarine	**_marines;
	int				isMarineInSquad(ISpaceMarine* marine) const;
public:
	Squad();
	Squad(const Squad &other);
	virtual ~Squad();
	Squad &operator=(const Squad&);

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
};

#endif
