#ifndef D05_FORM_HPP
# define D05_FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string				_name;
	bool							_isSigned;
	const unsigned int				_signGrade;
	const unsigned int				_executeGrade;

	Form();
	Form&			operator=(const Form&);
protected:
	std::string						_target;
	Form(std::string name, unsigned int signGrade,
		 unsigned int executeGrade);
public:
	Form(Form &);
	virtual ~Form();
	std::string const	&getName() const;
	unsigned int		getSignGrade() const;
	unsigned int		getExecuteGrade() const;
	bool				getIsSigned() const;
	void				setTarget(std::string const &);

	void				beSigned(Bureaucrat&);
	virtual void 		execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char  *what() const throw(){
			return ("Form grade is to high");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char  *what() const throw(){
				return ("Form grade is to low");
			}
	};
	class SignedException : public std::exception
	{
		public:
			virtual const char  *what() const throw(){
				return ("Trying to sign form, which already signed");
			}
	};
	class UnsignedException : public std::exception
	{
	public:
		virtual const char  *what() const throw(){
			return ("Trying to execute unsigned form");
		}
	};

};


std::ostream&		operator<<(std::ostream& os, const Form &);

#endif //D05_Form_HPP
