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
	Fixed(const int);
	Fixed(const float);
	~Fixed();
	Fixed& 				operator=(const Fixed&);

	int					toInt(void) const;
	float				toFloat(void) const;
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	int					getFractionalBits() const;
};

std::ostream&		operator<<(std::ostream& os, const Fixed &val);

#endif //D02_FIXED_CLASS_HPP
