#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# include <sstream>
# include <iostream>

class Contact
{
public:
					Contact(void);
					~Contact(void);
	int 			compare(Contact other);
    int        		getIndex(void);
	std::string		getF_name(void) const;
	std::string		getL_name(void) const;
	std::string		getNickname(void) const;
	std::string		getLogin(void) const;
	std::string		getAddress(void) const;
	std::string		getEmail(void) const;
	std::string		getPhone(void) const;
	std::string		getBirth(void) const;
	std::string		getMeal(void) const;
	std::string		getUnderwear_color(void) const;
	std::string		getDarkest_secret(void) const;
    void			setIndex(int num);
	void			setF_name(std::string str);
	void			setL_name(std::string str);
	void			setNickname(std::string str);
	void			setLogin(std::string str);
	void			setAddress(std::string str);
	void			setEmail(std::string str);
	void			setPhone(std::string str);
	void			setBirth(std::string str);
	void			setMeal(std::string str);
	void			setUnderwear_color(std::string str);
	void			setDarkest_secret(std::string str);
	static Contact	empty_contact(void);
	void			print_contact(void) const;
	void			fill_contact(void);

private:
    int          _index;
	std::string	_f_name;
	std::string	_l_name;
	std::string	_nickname;
	std::string	_login;
	std::string	_address;
	std::string	_email;
	std::string	_phone;
	std::string	_birth;
	std::string	_meal;
	std::string	_underwear_color;
	std::string	_darkest_secret;

};
#endif
