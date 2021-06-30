#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	Bureaucrat a("a-bur", 1);
	Bureaucrat c("c-bur", 150);
	Form		*rForm = new RobotomyRequestForm("thing");
	Form		*pForm = new PresidentialPardonForm("someone");
	Form		*sForm = new ShrubberyCreationForm("home");


	std::cout << "---попытка подписать форму с некорректным уровнем--"
			  << std::endl;
	try {
		c.signForm(*rForm);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка исполнить неподписанную форму"
			  << std::endl;
	try {
		a.executeForm(*rForm);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка подписать форму с корректным уровнем--"
			  << std::endl;
	try {
		a.signForm(*rForm);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка подписать форму с корректным уровнем,"
			  << " но уже подписанную--" << std::endl;

	try {
		a.signForm(*rForm);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка подписать формы с корректным уровнем"
			  << std::endl;
	try {
		a.signForm(*pForm);
		a.signForm(*sForm);
		std::cout << *rForm << *pForm << *sForm;
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка исполнить подписанную форму с некорректным уровнем"
			  << std::endl;
	try {
		c.executeForm(*rForm);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка испольнить формы с корректным уровнем"
			  << std::endl;
	try {
		a.executeForm(*pForm);
		a.executeForm(*sForm);
		a.executeForm(*rForm);
		std::cout << *rForm << *pForm << *sForm;
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	delete pForm;
	delete sForm;
	delete rForm;

	return (1);
}
