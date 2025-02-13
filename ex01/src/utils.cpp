/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:07:50 by jsommet           #+#    #+#             */
/*   Updated: 2025/02/13 17:47:18 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	FormatEntry(std::string entry)
{
	if (entry.length() > MAX_ENTRY_LEN)
		return (entry.substr(0, MAX_ENTRY_LEN - 1) + ".");
	else if (entry.length() < MAX_ENTRY_LEN)
		return (std::string(MAX_ENTRY_LEN - entry.length(), ' ') + entry);
	else
		return (entry);
}

bool	IsStringNumeric(const std::string &s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

int	AskForInput(std::string prompt, std::string &line)
{
	line.clear();
	while (line.empty())
	{
		std::cerr << prompt;
		std::getline(std::cin, line);
		if (!std::cin)
		{
			if (std::cin.eof())
				return (std::cerr << "EXIT" << "\n", -1);
			else
				return (std::cerr << "error reading stdin" << "\n", -1);
			break ;
		}
		if (line.empty())
			std::cerr << "Input can not be empty.\n";
	}
	return 0;
}
