/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:42:53 by jsommet           #+#    #+#             */
/*   Updated: 2025/02/07 22:33:07 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact()
{
}

void		Contact::SetInfo(ContactInfo contactInfo, std::string value)
{
	switch (contactInfo)
	{
		case FirstName:
			_firstName = value;
			break ;
		case LastName:
			_lastName = value;
			break ;
		case NickName:
			_nickName = value;
			break ;
		case PhoneNumber:
			_phoneNumber = value;
			break ;
		case DarkestSecret:
			_darkestSecret = value;
	}
}
std::string	Contact::GetInfo(ContactInfo contactInfo)
{
	switch (contactInfo)
	{
		case FirstName:
			return (_firstName);
		case LastName:
			return (_lastName);
		case NickName:
			return (_nickName);
		case PhoneNumber:
			return (_phoneNumber);
		case DarkestSecret:
			return (_darkestSecret);
	}
	return "";
}
