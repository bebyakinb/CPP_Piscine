//
// Created by Endell Noelia on 2/8/21.
//

#ifndef D02_FIXED_CLASS_HPP
# define D02_FIXED_CLASS_HPP
# include <iostream>

class Fixed
{
private:
	int					_rawBits;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed&);
	~Fixed();
	Fixed& 				operator=(const Fixed&);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);

};

#endif //D02_FIXED_CLASS_HPP
