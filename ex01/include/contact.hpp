/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:37:28 by jsommet           #+#    #+#             */
/*   Updated: 2024/11/12 18:55:00 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

enum ContactInfo
{
	FirstName,
	LastName,
	NickName,
	PhoneNumber,
	DarkestSecret
} ;

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	Contact();
	void		SetInfo(ContactInfo contactInfo, std::string _value);
	std::string	GetInfo(ContactInfo contactInfo);
} ;

#endif
