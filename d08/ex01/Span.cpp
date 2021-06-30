#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int N) : _maxCountN(N){}

Span::~Span(){}

Span::Span(Span const &other){
	*this = other;
}

Span	&Span::operator=(Span const &other){
	if (this != &other){
		_container = other._container;
		_maxCountN = other._maxCountN;
	}
	return *this;
}

void			Span::addNumber(int num){
	if (_maxCountN == 0
		|| static_cast<unsigned int>(_container.size()) > _maxCountN - 1){
		throw ContainerIsFullException ();
	} else {
		_container.insert(num);
	}
}

long 	Span::shortestSpan(){
	long minValue;
	long curValue;
	std::set<int>::const_iterator it;
	std::set<int>::const_iterator last;
	std::set<int>::const_iterator tmp;
	minValue = std::numeric_limits<long>::max();

	if (static_cast<long>(_container.size()) < 2){
		throw NotEnoughValuesException();
	}
	it = _container.begin();
	last = --_container.end();

	while (it != last){
		tmp = it;
		it++;
		curValue = static_cast<long>(*it) - static_cast<long>(*tmp);
		if (curValue < minValue){
			if ((minValue = curValue) == 0){
				return minValue;
			}
		}
	}
	return minValue;
}

long 	Span::longestSpan(){
	if (static_cast<long>(_container.size()) < 2){
		throw NotEnoughValuesException();
	}
	return static_cast<long>(*(--_container.end()))
		   - static_cast<long>(*(_container.begin()));
}

void	Span::fill(std::vector<int>::iterator it, std::vector<int>::iterator ite){
	while (it != ite){
		addNumber(*it);
		++it;
	}
}
