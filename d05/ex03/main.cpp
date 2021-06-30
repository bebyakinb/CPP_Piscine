#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	Intern intern;
	Form *newForm1;
	Form *newForm2;

	Bureaucrat a("a-bur", 1);
	/*Bureaucrat c("c-bur", 150);
	Form		*rForm = new RobotomyRequestForm("thing");
	Form		*pForm = new PresidentialPardonForm("someone");
	Form		*sForm = new ShrubberyCreationForm("home");
	*/

	std::cout << "---попытка интерном создать форму с некорректным именем--"
			  << std::endl;
	try {
		newForm1 = intern.makeForm("NoNameForm",
							 		"someone");
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
		newForm1 = NULL;
	}

	std::cout << "---попытка интерном создать форму с корректным именем--"
			  << std::endl;
	try {
		newForm2 = intern.makeForm("PresidentialPardonForm",
							 		"someone");
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
		newForm2 = NULL;
	}

	std::cout << "---попытка подписать созданную форму--"
			  << std::endl;
	try {
		a.signForm(*newForm2);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "---попытка исполнить подписанную форму"
			  << std::endl;
	try {
		a.executeForm(*newForm2);
	}
	catch (std::exception & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	if (newForm1)
		delete newForm1;
	if (newForm2)
		delete newForm2;
	return (1);
}
