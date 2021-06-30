#include <iostream>
#include <unistd.h>
#include "Array.hpp"

int main(){
	unsigned int i;
	Array<int> intArray(10);
	Array<double> doubleArray(10);

	i = 0;
	while (i < intArray.size()){
		intArray[i] = i;
		doubleArray[i] = i + 0.5;
		i++;
	}

	i = 0;
	while (i < intArray.size()){
		std::cout << intArray[i] << "\t" << doubleArray[i] << '\n';
		i++;
	}

	try{
		std::cout << intArray[15] << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Error :" << e.what() << std::endl;
	}
	Array<int> intArray2(0);
	intArray2 = NULL;
	intArray = NULL;
	doubleArray = NULL;
	sleep(500);
	return 0;
}
