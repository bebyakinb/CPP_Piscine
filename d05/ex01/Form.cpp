#include "Form.hpp"

Form::Form() :
	_name("default Form"),
	_isSigned(false),
	_signGrade(MIN_GRADE),
	_executeGrade(MIN_GRADE){}

Form::Form(std::string name,
		   const unsigned int signGrade, const unsigned int executeGrade) :
	_name(name),
	_isSigned(false),
	_signGrade(signGrade),
	_executeGrade(executeGrade){
	if (signGrade < MAX_GRADE || executeGrade < MAX_GRADE){
		throw Form::GradeTooHighException();
	}
	else if (signGrade > MIN_GRADE || executeGrade > MIN_GRADE){
		throw Form::GradeTooLowException();
	}
}

Form::~Form() {}

Form::Form(Form &other) :
		_name(other._name),
		_isSigned(false),
		_signGrade(other._signGrade),
		_executeGrade(other._executeGrade){}

std::string const	&Form::getName() const{
	return _name;
}

unsigned int		Form::getSignGrade() const{
	return _signGrade;
}

unsigned int		Form::getExecuteGrade() const{
	return _executeGrade;
}

bool				Form::getIsSigned() const{
	return _isSigned;
}

void				Form::beSigned(Bureaucrat& inst){
	if (inst.getGrade() > _signGrade){
		throw Form::GradeTooHighException();
	}
	else if (_isSigned){
		throw Form::SignedException();
	}
	_isSigned = true;
}

std::ostream&	operator<<(std::ostream& os,
										const Form& inst){
	os << inst.getName() << " is a "
	   << (inst.getIsSigned() ? "" : "un") << "sign form with signGrade = "
	   << inst.getSignGrade() << " and executeGrade = " << inst.getExecuteGrade()
	   << std::endl;
	return os;
}
