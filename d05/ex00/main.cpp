#include "Bureaucrat.hpp"


int main(){
	Bureaucrat a("a-bur", 1);
	Bureaucrat b("b-bur", 150);

	std::cout << "---попытка создать класс с некорректным уровнем---"
			  << std::endl;
	try {
		Bureaucrat c("c-bur", 0);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка создать класс с некорректным уровнем---"
			  << std::endl;
	try {
		Bureaucrat d("d-bur", 151);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка неккоректной инкрементации---"
			  << std::endl;
	try {
		a.incrementGrade();
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << "---попытка неккоректной декрементации---"
			  << std::endl;
	try {
		b.decrementGrade();
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << a;
	std::cout << b;
	return (1);
}
