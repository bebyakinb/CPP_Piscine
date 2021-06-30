#include "Span.hpp"
#include <iostream>

int main()
{
	Span testSpan(5);

	
	try{
		std::cout << testSpan.longestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << testSpan.shortestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}


	testSpan.addNumber(2147483647);
	try{
		std::cout << testSpan.longestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << testSpan.shortestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	testSpan.addNumber(4);
	testSpan.addNumber(2);
	testSpan.addNumber(-2147483648);
	testSpan.addNumber(-2147483648);
	try{
		testSpan.addNumber(-2147483648);
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << testSpan.longestSpan() << std::endl;
	std::cout << testSpan.shortestSpan() << std::endl;

	Span testSpan1(0);
	try{
		testSpan1.addNumber(-2147483648);
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << testSpan1.longestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << testSpan1.shortestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	Span testSpan2(10);
	std::vector<int> v(10);

	for(int i = 0; i < 10; ++i){
		v[i] = i * 10;
	}
	testSpan2.fill(v.begin(), v.end());

	std::cout << testSpan2.longestSpan() << std::endl;
	std::cout << testSpan2.shortestSpan() << std::endl;


}
