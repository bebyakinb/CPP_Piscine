#ifndef D05_INTERN_HPP
# define D05_INTERN_HPP
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern &);
	~Intern();
	Intern&			operator=(const Intern&);
	Form *makeForm(std::string formName, std::string formTarget);
	Form *makeShrubberyCreationForm(const std::string & target);
	Form *makePresidentialPardonForm(const std::string & target);
	Form *makeRobotomyRequestForm(const std::string & target);

	class FormNotFound : public std::exception
	{
	public:
		virtual const char  *what() const throw(){
			return ("form not found");
		}
	};
	typedef Form * (Intern::*NewFormFunc)(const std::string & target);
};


#endif //D05_INTERN_HPP
