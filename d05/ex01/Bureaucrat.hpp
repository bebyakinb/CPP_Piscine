#ifndef D05_BUREAUCRAT_HPP
# define D05_BUREAUCRAT_HPP
# define MAX_GRADE 1
# define MIN_GRADE 150
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int 		_grade;
	Bureaucrat&			operator=(const Bureaucrat&);
public:
	Bureaucrat();
	Bureaucrat(const std::string &, unsigned int);
	Bureaucrat(Bureaucrat &);
	~Bureaucrat();

	std::string const	&getName() const;
	unsigned int 		getGrade() const;
	void				incrementGrade();
	void				decrementGrade();
	void				signForm(Form &);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char  *what() const throw(){
			return ("Bureaucrat grade is to high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char  *what() const throw(){
			return ("Bureaucrat grade is to high");
		}
	};
};


std::ostream&		operator<<(std::ostream& os, const Bureaucrat &);

#endif //D05_BUREAUCRAT_HPP
