/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:07:50 by jsommet           #+#    #+#             */
/*   Updated: 2025/02/07 22:41:39 by jsommet          ###   ########.fr       */
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

void	ExitWithMessage(int exitCode, std::string message)
{
	std::cerr << message << "\n";
	exit(exitCode);
}

bool	IsStringNumeric(const std::string &s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

std::string	AskForInput(std::string prompt)
{
	std::string	line;

	while (line.empty())
	{
		std::cerr << prompt;
		std::getline(std::cin, line);
		if (!std::cin)
		{
			if (std::cin.eof())
				ExitWithMessage(EXIT_SUCCESS, "EXIT");
			else
				ExitWithMessage(EXIT_FAILURE, "error reading stdin");
			break ;
		}
		if (line.empty())
			std::cerr << "Input can not be empty.\n";
	}
	return (line);
}
