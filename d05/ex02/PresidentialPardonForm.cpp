#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
		Form("PresidentialPardonForm", 25, 5){
	setTarget("noTarget");
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
		Form("PresidentialPardonForm", 25, 5){
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) :
		Form(other){}

PresidentialPardonForm::~PresidentialPardonForm() {}

void 		PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!getIsSigned()){
		throw Form::UnsignedException();
	}
	else if (executor.getGrade() > getExecuteGrade() ) {
		throw Form::GradeTooHighException();
	}
	std::cout << _target << " has been pardoned by Zafod Beeblebrox."
			  << std::endl;
}

