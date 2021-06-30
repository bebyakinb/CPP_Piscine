#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	Bureaucrat a("a-bur", 1);
	Bureaucrat b("b-bur", 150);
	Form form("newform1",40, 40);


	std::cout << "---попытка создать форму со слишком высоким уровнем--"
			  << std::endl;
	try{
		Form form2("newform21",0, 150);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка создать форму со слишком низким уровнем--"
			  << std::endl;
	try{
		Form form2("newform42",10, 160);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка подписать форму с низким уровнем бюрократа--"
			  << std::endl;
	try {
		b.signForm(form);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка подписать форму с корректным уровнем--"
			  << std::endl;
	try {
		a.signForm(form);
		std::cout << form;
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка подписать форму с корректным уровнем, но уже "
			  "подписанную--"
			  << std::endl;
	try {
		a.signForm(form);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return (1);
}
