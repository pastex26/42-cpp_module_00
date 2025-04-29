#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	toReplace = 0;
	contact_size = 0;
	helper();
}

void	PhoneBook::helper()
{
	std::cout << HELPER << std::endl;
}

std::string	PhoneBook::getInput(std::string toGet)
{
	std::string	input;

	while (input.empty())
	{
		if (std::cin.eof())
		{
			std::cerr << "EOF reached" << std::endl;
			exit (0);
		}
		if (!toGet.empty())
		{
			std::cout << "Enter " << toGet << ":" << std::endl;
			std::getline(std::cin, input);
			return input;
		}
		else
		{
			std::getline(std::cin, input);
			if (input == "ADD")
			{
				setContact();
			}
			else if (input == "SEARCH")
			{
				showContact();
			}
			else if (input == "EXIT")
			{
				exit (0);
			}
			else if (!input.empty())
			{
				helper();
			}
		}
	}
	return input;
}

void	PhoneBook::setContact()
{
	if (toReplace == CONTACT_SIZE)
	{
		toReplace = 0;
	}
	contacts[toReplace].setFirstName(getInput("First Name"));
	contacts[toReplace].setLastName(getInput("Last Name"));
	contacts[toReplace].setNickname(getInput("Nickname"));
	contacts[toReplace].setPhoneNum(getInput("Phone number"));
	contacts[toReplace].setSecret(getInput("Darkest secret"));
	toReplace++;
	if (contact_size != CONTACT_SIZE)
		contact_size++;
}

void	PhoneBook::showContact()
{
	for (size_t i = 0; i < contact_size; i++)
	{
		std::cout << i << ": ";
		std::cout << contacts[i].getFirstName() << " ";
		std::cout << contacts[i].getLastName() << " ";
		std::cout << contacts[i].getNickname() << " ";
		std::cout << contacts[i].getPhoneNumber() << std::endl;
	}
}
