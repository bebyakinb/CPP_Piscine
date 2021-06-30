#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
	std::vector<int> myVector;
	std::list<int> myList;
	std::deque<int> myDeque;

	for(int i = 0; i <= 7; i++){
		myVector.push_back(i * 3);
		myList.push_back(i * 2 );
		myDeque.push_front(i);
	}

	std::cout << easyfind(myVector,6) << std::endl;
	std::cout << easyfind(myList,4) << std::endl;
	std::cout << easyfind(myDeque,3) << std::endl;
}
