/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsommet <jsommet@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:51:22 by jsommet           #+#    #+#             */
/*   Updated: 2024/11/04 20:08:13 by jsommet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <string>
# include "contact.hpp"
# include "phonebook.hpp"

# define MAX_ENTRY_LEN 10

std::string	FormatEntry(std::string entry);
int			AskForInput(std::string prompt, std::string& line);
void		ExitWithMessage(int exitCode, std::string message);
bool		IsStringNumeric(const std::string &s);

#endif // !MAIN_HPP
