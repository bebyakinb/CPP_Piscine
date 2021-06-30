#include "Contact.class.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}

void	Contact::setIndex(int num){
    this->_index = num;
    return;
}

void	Contact::setF_name(std::string str){
	this->_f_name = str;
	return;
}

void	Contact::setL_name(std::string str){
	this->_l_name = str;
	return;
}

void	Contact::setNickname(std::string str){
	this->_nickname = str;
	return;
}

void	Contact::setLogin(std::string str){
	this->_login = str;
	return;
}

void	Contact::setAddress(std::string str){
	this->_address = str;
	return;
}

void	Contact::setEmail(std::string str){
	this->_email = str;
	return;
}

void	Contact::setPhone(std::string str){
	this->_phone = str;
	return;
}

void	Contact::setBirth(std::string str){
	this->_birth = str;
	return;
}

void	Contact::setMeal(std::string str){
	this->_meal = str;
	return;
}

void	Contact::setUnderwear_color(std::string str){
	this->_underwear_color = str;
	return;
}

void	Contact::setDarkest_secret(std::string str){
	this->_darkest_secret = str;
	return;
}

int        	Contact::getIndex(void){
	return (this->_index);
}

std::string Contact::getF_name(void) const{
	return (this->_f_name);
}

std::string Contact::getL_name(void) const{
	return (this->_l_name);
}

std::string Contact::getNickname(void) const{
	return (this->_nickname);
}

std::string Contact::getLogin(void) const{
	return (this->_login);
}

std::string Contact::getAddress(void) const{
	return (this->_address);
}

std::string Contact::getEmail(void) const{
	return (this->_email);
}

std::string Contact::getPhone(void) const{
	return (this->_phone);
}

std::string Contact::getBirth(void) const{
	return (this->_birth);
}

std::string Contact::getMeal(void) const{
	return (this->_meal);
}

std::string Contact::getUnderwear_color(void) const{
	return (this->_underwear_color);
}

std::string Contact::getDarkest_secret(void) const{
	return (this->_darkest_secret);
}

int	Contact::compare(Contact other){
	if (this->_f_name.compare(other.getF_name()))
		return (1);
	if (this->_l_name.compare(other.getL_name()))
		return (1);
	if (this->_nickname.compare(other.getNickname()))
		return (1);
	if (this->_login.compare(other.getLogin()))
		return (1);
	if (this->_address.compare(other.getAddress()))
		return (1);
	if (this->_email.compare(other.getEmail()))
		return (1);
	if (this->_phone.compare(other.getPhone()))
		return (1);
	if (this->_birth.compare(other.getBirth()))
		return (1);
	if (this->_meal.compare(other.getMeal()))
		return (1);
	if (this->_underwear_color.compare(other.getUnderwear_color()))
		return (1);
	if (this->_darkest_secret.compare(other.getDarkest_secret()))
		return (1);
	return (0);
}

Contact		Contact::empty_contact(void){
	Contact     contact;

	contact.setF_name("");
	contact.setL_name("");
	contact.setNickname("");
	contact.setLogin("");
	contact.setAddress("");
	contact.setEmail("");
	contact.setPhone("");
	contact.setBirth("");
	contact.setMeal("");
	contact.setUnderwear_color("");
	contact.setDarkest_secret("");
	return (contact);
}

void	Contact::print_contact(void) const{
	std::cout << "first name: ";
	std::cout << this->getF_name() << std::endl;
	std::cout << "last name: ";
	std::cout << this->getL_name() << std::endl;
	std::cout << "nickname: ";
	std::cout << this->getNickname() << std::endl;
	std::cout << "login: ";
	std::cout << this->getLogin() << std::endl;
	std::cout << "postal address: ";
	std::cout << this->getAddress() << std::endl;
	std::cout << "email address: ";
	std::cout << this->getEmail() << std::endl;
	std::cout << "phone number: ";
	std::cout << this->getPhone() << std::endl;
	std::cout << "birthday date: ";
	std::cout << this->getBirth() << std::endl;
	std::cout << "favorite meal: ";
	std::cout << this->getMeal() << std::endl;
	std::cout << "underwear color: ";
	std::cout << this->getUnderwear_color() << std::endl;
	std::cout << "darkest secret: ";
	std::cout << this->getDarkest_secret() << std::endl;
}

void	Contact::fill_contact(void)
{
	std::string buff;

	std::cout << "first name: ";
	std::getline (std::cin, buff);
	this->setF_name(buff);
	std::cout << "last name: ";
	std::getline (std::cin, buff);
	this->setL_name(buff);
	std::cout << "nickname: ";
	std::getline (std::cin, buff);
	this->setNickname(buff);
	std::cout << "login: ";
	std::getline (std::cin, buff);
	this->setLogin(buff);
	std::cout << "postal address: ";
	std::getline (std::cin, buff);
	this->setAddress(buff);
	std::cout << "email address: ";
	std::getline (std::cin, buff);
	this->setEmail(buff);
	std::cout << "phone number: ";
	std::getline (std::cin, buff);
	this->setPhone(buff);
	std::cout << "birthday date: ";
	std::getline (std::cin, buff);
	this->setBirth(buff);
	std::cout << "favorite meal: ";
	std::getline (std::cin, buff);
	this->setMeal(buff);
	std::cout << "underwear color: ";
	std::getline (std::cin, buff);
	this->setUnderwear_color(buff);
	std::cout << "darkest secret: ";
	std::getline (std::cin, buff);
	this->setDarkest_secret(buff);
}
