#ifndef EX02_ARRAY_HPP
# define EX02_ARRAY_HPP
# include <iostream>

template<typename T>
class Array{
private:
	T				*_arr;
	unsigned int	_size;
public:
	Array();
	Array(unsigned int n);
	Array(Array const &);
	~Array();

	Array		&operator=(Array const &);
	size_t		size(void);
	T			&operator[](unsigned int);
	class OutOfLimitsException : public std::exception
	{
	public:
		virtual const char  *what() const throw(){
			return ("Index is out of limits");
		}
	};
};

template <typename T>
Array<T>::Array(): _arr(NULL), _size(0){}

template <typename T>
Array<T>::Array(unsigned int n): _size(n){
	_arr = new T[n];
}

template <typename T>
Array<T>::Array(Array const &other): _arr(NULL), _size(0){
	*this = other;
}

template <typename T>
Array<T>::~Array(){
	delete [] _arr;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &other){
	unsigned int i;

	if (this == &other){
		return *this;
	}
	if (_size != other._size){
		_size = other._size;
		delete[] _arr;
		_arr = new T[_size];
	}
	i = 0;
	while (i < _size){
		_arr[i] = other._arr[i];
		i++;
	}
	return *this;
}

template <typename T>
T&			Array<T>::operator[](unsigned int index){
	if (index > _size){
		throw Array::OutOfLimitsException();
	}
	else {
		return _arr[index];
	}
}

template <typename T>
size_t		Array<T>::size(void){
	return _size;
}

#endif //EX02_ARRAY_HPP
