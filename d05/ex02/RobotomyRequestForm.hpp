#ifndef D05_ROBOTOMYREQUESTFORM_HPP
# define D05_ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	RobotomyRequestForm&			operator=(const Form&);
public:
	RobotomyRequestForm(std::string const &);
	RobotomyRequestForm(RobotomyRequestForm &);
	virtual ~RobotomyRequestForm();

	virtual void 		execute(Bureaucrat const & executor) const;
};


#endif //D05_ROBOTOMYREQUESTFORM_HPP
