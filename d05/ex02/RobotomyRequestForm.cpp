#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45){
	setTarget("noTarget");
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("RobotomyRequestForm", 72, 45){
	setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) :
	Form(other){}

RobotomyRequestForm::~RobotomyRequestForm() {}

void 		RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (!getIsSigned()){
		throw Form::UnsignedException();
	}
	else if (executor.getGrade() > getExecuteGrade() ) {
		throw Form::GradeTooHighException();
	}
	std::cout << "*drrrr drrrr drrr*" << std::endl;
	/* initialize random seed: */
	std::srand(time(NULL));
	int r = std::rand() % 2;
	if (r){
		std::cout << _target << " has been robotomized successfully."
				  << std::endl;
	}
	else{
		std::cout << "Failure." << std::endl;
	}

}