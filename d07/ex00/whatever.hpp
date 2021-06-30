#ifndef EX00_WHATEVER_HPP
# define EX00_WHATEVER_HPP

template<typename T>
void	swap(T &value1, T &value2){
	T tmp = value1;

	value1 = value2;
	value2 = tmp;
}

template<typename T>
T const 	&min(T const &value1, T const &value2){
	return (value1 < value2? value1 : value2);
}

template<typename T>
T const 	&max(T const &value1, T const &value2){
	return (value1 > value2? value1 : value2);
}

#endif //EX00_WHATEVER_HPP
