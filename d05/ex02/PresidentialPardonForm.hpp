#ifndef D05_PRESIDENTIALPARDONFORM_HPP
# define D05_PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	PresidentialPardonForm&			operator=(const Form&);
public:
	PresidentialPardonForm(std::string const &);
	PresidentialPardonForm(PresidentialPardonForm &);
	virtual ~PresidentialPardonForm();

	virtual void 		execute(Bureaucrat const & executor) const;
};


#endif //D05_PRESIDENTIALPARDONFORM_HPP
