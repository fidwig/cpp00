/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:12:21 by jsommet           #+#    #+#             */
/*   Updated: 2024/11/04 21:21:11 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	CommandAdd(Phonebook& phonebook)
{
	Contact		contact;

	contact = Contact();
	contact.SetInfo(FirstName, AskForInput("First Name: "));
	contact.SetInfo(LastName, AskForInput("Last Name: "));
	contact.SetInfo(NickName, AskForInput("Nick Name: "));
	contact.SetInfo(PhoneNumber, AskForInput("Phone Number: "));
	contact.SetInfo(DarkestSecret, AskForInput("Darkest Secret: "));
	phonebook.AddContact(contact);
}

void	CommandSearch(Phonebook& phonebook)
{
	int	index;
	std::string input;

	index = -1;
	phonebook.ListContacts();
	input = "NaN";
	while (!IsStringNumeric(input))
	{
		input = AskForInput("Enter the desired contact's index: ");
		if (!IsStringNumeric(input))
			std::cerr << "Input has to be a number." << "\n";
	}
	index = atoi(input.c_str());
	if (index < 0 || index >= phonebook.GetContactCount())
	{
		std::cout << "Input does not match a contact." << std::endl;
		return ;
	}
	phonebook.ShowContact(index);
}

void	CommandExit()
{
	ExitWithMessage(EXIT_SUCCESS, "EXIT");
}

int	main(void)
{
	Phonebook phonebook;
	std::string line;

	phonebook = Phonebook();
	while (1)
	{
		std::getline(std::cin, line);
		if (!std::cin)
		{
			if (std::cin.eof())
				ExitWithMessage(EXIT_SUCCESS, "EXIT");
			else
				ExitWithMessage(EXIT_FAILURE, "error reading stdin");
			break ;
		}
		if (line == "ADD")
			CommandAdd(phonebook);
		else if (line == "SEARCH")
			CommandSearch(phonebook);
		else if (line == "EXIT")
			CommandExit();
	}
	return (1);
}