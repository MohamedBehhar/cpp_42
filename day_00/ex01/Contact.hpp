#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string.h>
#include <iomanip>


class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _darkestSecret;
	std::string	_phoneNumber;
public:
	Contact(/* args */);
	Contact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber);
	void display();
	void displayColumns(int id);
	void displayAllColumns(int id);
	~Contact();
};

#endif
