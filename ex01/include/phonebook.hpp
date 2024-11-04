/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:35:57 by jsommet           #+#    #+#             */
/*   Updated: 2024/11/04 21:08:39 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACT_COUNT 8

#include "main.hpp"

class Phonebook
{
private:
	int	contactCount;
	int	nextContact;
	Contact	contacts[MAX_CONTACT_COUNT];
public:
	Phonebook();
	void	AddContact(Contact contact);
	void	ListContacts();
	void	ShowContact(int	index);
	int		GetContactCount();
};

#endif
