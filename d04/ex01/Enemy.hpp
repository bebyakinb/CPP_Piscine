#ifndef D04_ENEMY_HPP
# define D04_ENEMY_HPP
# include <iostream>

class Enemy
{
private:
	int					_hp;
	std::string			_type;
	Enemy();
	Enemy(const Enemy &other);
public:
	Enemy(int hp, std::string const & type);
	Enemy 				&operator=(const Enemy&other);
	virtual ~Enemy();
	const std::string	&getType() const;
	int					getHP() const;
	void				setHP(int hp);
	virtual void		takeDamage(int);

};

#endif
