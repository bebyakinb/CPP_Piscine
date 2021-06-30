#include <stack>
#ifndef EX02_MUTANTSTACK_HPP
# define EX02_MUTANTSTACK_HPP


template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>(){}
	MutantStack(MutantStack const &other) :  std::stack<T>(other){}
	~MutantStack() {}
	MutantStack		&operator=(MutantStack const &other) {
		std::stack<T>::operator=(other);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(){return std::begin(std::stack<T>::c);}
	iterator end(){return std::end(std::stack<T>::c);}
};

#endif //EX02_MUTANTSTACK_HPP
