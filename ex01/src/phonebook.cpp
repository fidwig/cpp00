/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:43:00 by jsommet           #+#    #+#             */
/*   Updated: 2025/02/07 22:43:10 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Phonebook::Phonebook()
{
	_contactCount = 0;
	_nextContact = 0;
}

void	Phonebook::AddContact(Contact contact)
{
	contacts[_nextContact] = contact;
	if (_contactCount < MAX_CONTACT_COUNT)
		_contactCount++;
	_nextContact = (_nextContact + 1) % MAX_CONTACT_COUNT;
}

void	Phonebook::ListContacts()
{
	std::cout << FormatEntry("Index") << "|" << FormatEntry("First Name") << "|" << FormatEntry("Last Name") << "|" << FormatEntry("Nick Name") << std::endl;
	for (int i = 0; i < _contactCount; i++)
	{
		std::cout << "         " << i << "|";
		std::cout << FormatEntry(contacts[i].GetInfo(FirstName)) << "|";
		std::cout << FormatEntry(contacts[i].GetInfo(LastName)) << "|";
		std::cout << FormatEntry(contacts[i].GetInfo(NickName)) << std::endl;
	}
}

void	Phonebook::ShowContact(int index)
{
	std::cout << "First Name:\t" << contacts[index].GetInfo(FirstName) << '\n';
	std::cout << "Last Name:\t" << contacts[index].GetInfo(LastName) << '\n';
	std::cout << "Nick Name:\t" << contacts[index].GetInfo(NickName) << '\n';
	std::cout << "Phone Number:\t" << contacts[index].GetInfo(PhoneNumber) << '\n';
	std::cout << "Darkest Secret:\t" << contacts[index].GetInfo(DarkestSecret) << std::endl;
}

int	Phonebook::GetContactCount()
{
	return (_contactCount);
}
