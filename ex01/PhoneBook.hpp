#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

#define HELPER "ADD: add a contact\nSEARCH: show requested contact\nEXIT: exit program"
#define CONTACT_SIZE 8

class PhoneBook
{
private:
	Contact	contacts[CONTACT_SIZE];
	size_t	contact_size;
	int		toReplace;

public:
	PhoneBook(void);
	std::string	getInput(std::string toGet);
	void		setContact();
	void		showContact();
	void		helper();
};

#endif