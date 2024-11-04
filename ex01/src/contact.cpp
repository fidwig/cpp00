/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:42:53 by jsommet           #+#    #+#             */
/*   Updated: 2024/11/04 21:22:49 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact()
{

}

void		Contact::SetInfo(ContactInfo contactInfo, std::string _value)
{
	switch (contactInfo)
	{
		case FirstName:
			firstName = _value;
		case LastName:
			lastName = _value;
		case NickName:
			nickName = _value;
		case PhoneNumber:
			phoneNumber = _value;
		case DarkestSecret:
			darkestSecret = _value;
	}
}
std::string	Contact::GetInfo(ContactInfo contactInfo)
{
	switch (contactInfo)
	{
		case FirstName:
			return (firstName);
		case LastName:
			return (lastName);
		case NickName:
			return (nickName);
		case PhoneNumber:
			return (phoneNumber);
		case DarkestSecret:
			return (darkestSecret);
	}
	return "";
}
