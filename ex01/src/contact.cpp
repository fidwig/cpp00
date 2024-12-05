/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:42:53 by jsommet           #+#    #+#             */
/*   Updated: 2024/11/12 18:55:13 by jsommet          ###   ########.fr       */
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
		case LastName:
			_lastName = value;
		case NickName:
			_nickName = value;
		case PhoneNumber:
			_phoneNumber = value;
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
