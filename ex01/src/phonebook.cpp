/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:43:00 by jsommet           #+#    #+#             */
/*   Updated: 2024/11/04 21:32:40 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Phonebook::Phonebook()
{
	contactCount = 0;
	nextContact = 0;
}

void	Phonebook::AddContact(Contact contact)
{
	contacts[nextContact] = contact;
	if (contactCount < MAX_CONTACT_COUNT)
		contactCount++;
	nextContact = (nextContact + 1) % MAX_CONTACT_COUNT;
}

void	Phonebook::ListContacts()
{
	std::cout << FormatEntry("Index") << "|" << FormatEntry("First Name") << "|" << FormatEntry("Last Name") << "|" << FormatEntry("Nick Name") << std::endl;
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << i << "         " << "|";
		std::cout << FormatEntry(contacts[i].GetInfo(FirstName)) << "|";
		std::cout << FormatEntry(contacts[i].GetInfo(LastName)) << "|";
		std::cout << FormatEntry(contacts[i].GetInfo(NickName)) << std::endl;
	}
}

void	Phonebook::ShowContact(int index)
{
	std::cout << "First Name: " << contacts[index].GetInfo(FirstName) << '\n';
	std::cout << "Last Name: " << contacts[index].GetInfo(LastName) << '\n';
	std::cout << "Nick Name: " << contacts[index].GetInfo(NickName) << '\n';
	std::cout << "Phone Number: " << contacts[index].GetInfo(PhoneNumber) << '\n';
	std::cout << "Darkest Secret: " << contacts[index].GetInfo(DarkestSecret) << std::endl;
}

int	Phonebook::GetContactCount()
{
	return (contactCount);
}
