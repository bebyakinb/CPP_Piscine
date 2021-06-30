#include <iostream>
#include <stack>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	MutantStack<float> mstack1;
	mstack1.push(3.45f);
	mstack1.push(5.5f);
	mstack1.push(737.5454f);
	mstack1.push(13.4225f);
	mstack1.push(2.1115f);
	mstack1.push(7.111154f);
	mstack1.pop();
	MutantStack<float>::iterator it1 = mstack1.begin();

	while (it1 != mstack1.end())
	{
		std::cout << *it1 << " ";
		++it1;
	}
	return 0;
}