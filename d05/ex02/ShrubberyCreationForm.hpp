#ifndef D05_SHRUBBERYCREATIONFORM_HPP
# define D05_SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm&			operator=(const Form&);
public:
	ShrubberyCreationForm(std::string const &);
	ShrubberyCreationForm(ShrubberyCreationForm &);
	virtual ~ShrubberyCreationForm();

	virtual void 		execute(Bureaucrat const & executor) const;
};

#endif //D05_SHRUBBERYCREATIONFORM_HPP
