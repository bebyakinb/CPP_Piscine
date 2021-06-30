#ifndef EX00_EASYFIND_HPP
# define EX00_EASYFIND_HPP
# include <algorithm>

template<typename T>
int		easyfind(T container, int value){
	typename T::iterator it = std::find(container.begin()
										,container.end() , value);
	if (it == container.end())
		throw std::exception();
	return *it;
}

#endif //EX00_EASYFIND_HPP
