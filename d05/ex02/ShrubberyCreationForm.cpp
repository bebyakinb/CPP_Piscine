#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form
("ShrubberyCreationForm", 145, 137){
	setTarget("noTarget");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form
("ShrubberyCreationForm", 145, 137){
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) :
Form(other){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void 		ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	std::ofstream f;

	if (!getIsSigned()){
		throw Form::UnsignedException();
	}
	else if (executor.getGrade() > getExecuteGrade() ) {
		throw Form::GradeTooHighException();
	}
	std::string name = _target + "_shrubbery";
	f.open(name, std::ios::trunc);
	f << "    .       ." << std::endl;
	f << "   ...     ..." << std::endl;
	f << "  .....   ....." << std::endl;
	f << "   ...     ..." << std::endl;
	f << "  .....   ....." << std::endl;
	f << " ....... ......." << std::endl;
	f << "  .....   ....." << std::endl;
	f << " ....... ......." << std::endl;
	f << "   ##       ##" << std::endl;
	f << "   ##       ##" << std::endl;

	f.close();
	return;
}