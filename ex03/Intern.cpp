/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:56:50 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 13:01:32 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default constructor [Intern]"<< std::endl;
}

Intern::~Intern()
{
	std::cout << "Destructor [Intern]"<< std::endl;
}

Intern::Intern( const Intern &src )
{
	std::cout << "Copy constructor [Bureaucrat]";
}

Intern & Intern::operator=( const Intern &src )
{
	return (*this);
}

Form * Intern::makeForm(const std::string &formName, const std::string &target) const
{
	
}
