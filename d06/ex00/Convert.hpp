#ifndef D06_CONVERT_HPP
# define D06_CONVERT_HPP
# include <iostream>

class Convert
{
private:
	void	*GetCurrentType(std::string const &value);
	void	*GetFloatType(char const *cValue);
	void	printChar(char c, bool possible);
	void	printInt(int i, bool possible);
	void	printFloat(float f, bool possible);
	void	printDouble(double d, bool possible);
	void 	printAllImpossible();
public:
	Convert();
	Convert(std::string value);
	Convert(Convert const &other);
	virtual ~Convert();
	Convert				&operator=(Convert const &other);

	bool	isCharOverflow(double);
	bool	isIntOverflow(double);
	bool	isFloatOverflow(double);



};


#endif //D06_CONVERT_HPP
