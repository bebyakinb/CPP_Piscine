#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern & other){
	*this = other;
}

Intern::~Intern() {}

Intern	&Intern::operator=(Intern const &other){
	(void)other;
	return *this;
}

Form	*Intern::makeShrubberyCreationForm(const std::string & target){
	return new ShrubberyCreationForm(target);
}

Form *Intern::makePresidentialPardonForm(const std::string & target){
	return new PresidentialPardonForm(target);
}

Form *Intern::makeRobotomyRequestForm(const std::string & target){
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeForm(std::string formName, std::string formTarget){
	int i;
	const int availableFormNum = 3;
	std::string availableFormNames[availableFormNum] = {"ShrubberyCreationForm",
								  "PresidentialPardonForm",
								  "RobotomyRequestForm"};

	NewFormFunc availableForms[availableFormNum] =
				{&Intern::makeShrubberyCreationForm,
				&Intern::makePresidentialPardonForm,
				&Intern::makeRobotomyRequestForm};
	i = 0;
	while (i < availableFormNum){
		if (formName == availableFormNames[i]){
			std::cout << "Intern creates " << availableFormNames[i]
					  << std::endl;
			return (this->*availableForms[i])(formTarget);
		}
		i++;
	}
	throw Intern::FormNotFound();
}


