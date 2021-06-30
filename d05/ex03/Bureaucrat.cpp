#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
	_name("default bureaucrat"),
	_grade(150){}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) :
			_name(name){
	if (grade < MAX_GRADE){
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > MIN_GRADE){
		throw Bureaucrat::GradeTooLowException();
	}
	_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat &other) :
		_name(other._name),
		_grade(other._grade){}

std::string const	&Bureaucrat::getName() const{
	return _name;
}

unsigned int		Bureaucrat::getGrade() const{
	return _grade;
}

void				Bureaucrat::incrementGrade(){
	if (_grade == MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void				Bureaucrat::decrementGrade(){
	if (_grade == MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
}

void				Bureaucrat::signForm(Form & form){
	try{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << _name << " cannot sign " << form.getName()
				  << " because " << e.what() <<std::endl;
	}
}

void				Bureaucrat::executeForm(Form const & form){
	try{
		form.execute(*this);
		std::cout << _name << " executes " << form;
	}
	catch (std::exception & e){
		std::cerr << _name << " cannot execute " << form.getName()
				  << " because " << e.what() << std::endl;

	}
}

std::ostream&	operator<<(std::ostream& os,
							const Bureaucrat& inst){
	os << inst.getName() << ", bureaucrat grade " << inst.getGrade() << "."
	   << std::endl;
	return os;
}
