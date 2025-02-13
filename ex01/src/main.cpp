/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:12:21 by jsommet           #+#    #+#             */
/*   Updated: 2025/02/13 17:47:57 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	CommandAdd(Phonebook& phonebook)
{
	Contact		contact;
	std::string	input;

	if (AskForInput("First Name: ", input) == -1)
		return -1;
	contact.SetInfo(FirstName, input);
	if (AskForInput("Last Name: ", input) == -1)
		return -1;
	contact.SetInfo(LastName, input);
	if (AskForInput("Nick Name: ", input) == -1)
		return -1;
	contact.SetInfo(NickName, input);
	if (AskForInput("Phone Number: ", input) == -1)
		return -1;
	contact.SetInfo(PhoneNumber, input);
	if (AskForInput("Darkest Secret: ", input) == -1)
		return -1;
	contact.SetInfo(DarkestSecret, input);
	phonebook.AddContact(contact);
	return 0;
}

int	CommandSearch(Phonebook& phonebook)
{
	int	index;
	std::string input;

	if (phonebook.GetContactCount() == 0)
	{
		std::cout << "There are no contacts." << std::endl;
		return 0;
	}
	index = -1;
	phonebook.ListContacts();
	input = "NaN";
	while (!IsStringNumeric(input))
	{
		if (AskForInput("Enter the desired contact's index: ", input) == -1)
			return -1;
		if (!IsStringNumeric(input))
		{
			std::cerr << "Input has to be a number." << "\n";
			return 0;
		}
	}
	index = atoi(input.c_str());
	if (index < 0 || index >= phonebook.GetContactCount())
	{
		std::cout << "Input does not match a contact." << std::endl;
		return 0;
	}
	phonebook.ShowContact(index);
	return 0;
}

int	main(void)
{
	Phonebook phonebook;
	std::string line;

	while (1)
	{
		std::cerr << "PHONEBOOK $ ";
		std::getline(std::cin, line);
		if (!std::cin)
		{
			if (std::cin.eof())
				return (std::cerr << "EXIT\n", 0);
			else
				return (std::cerr << "error reading stdin\n", 1);
			break ;
		}
		if (line == "ADD")
		{
			if (CommandAdd(phonebook) < 0)
				return -1;
		}
		else if (line == "SEARCH")
		{
			if (CommandSearch(phonebook) < 0)
				return -1;
		}
		else if (line == "EXIT")
			return (std::cerr << "EXIT\n", 0);
		else if (!line.empty())
			std::cerr << "Invalid command" << std::endl;
	}
	return (0);
}
