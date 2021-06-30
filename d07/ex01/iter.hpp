#ifndef EX01_ITER_HPP
# define EX01_ITER_HPP

template<typename T>
void 	iter(T* arr, unsigned int len, void(*f)(T const &)){
	unsigned int i;

	i = 0;
	while (i < len){
		f(arr[i]);
		i++;
	}
}

#endif //EX01_ITER_HPP
