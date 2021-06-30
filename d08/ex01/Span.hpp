#ifndef EX01_SPAN_HPP
# define EX01_SPAN_HPP
# include <set>
# include <vector>
# include <limits>
# include <numeric>

class Span
{
private:
	std::multiset<int>	_container;
	unsigned int		_maxCountN;
	Span();
public:
	Span(unsigned int N);
	virtual ~Span();
	Span(Span const &);
	Span &operator=(Span const &);

	void			addNumber(int num);
	long 	shortestSpan();
	long 	longestSpan();
	void	fill(std::vector<int>::iterator it, std::vector<int>::iterator ite);
	class ContainerIsFullException : public std::exception
	{
	public:
		virtual const char  *what() const throw(){
			return ("Container is full");
		}
	};

	class NotEnoughValuesException : public std::exception
	{
	public:
		virtual const char  *what() const throw(){
			return ("Not enough values in container");
		}
	};
};

#endif //EX01_SPAN_HPP
