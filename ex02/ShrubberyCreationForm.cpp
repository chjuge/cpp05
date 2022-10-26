/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:44:07 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/23 12:45:19 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
	std::cout << "Default constructor [ShrubberyCreationForm] " << this->getName() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor [ShrubberyCreationForm] " << this->getName() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	std::cout << "Copy constructor [ShrubberyCreationForm] " << this->getName() << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string & target) : Form("Shrubbery Creation Form", 145, 137), target(target)
{
	std::cout << "Constructor [ShrubberyCreationForm] " << this->getName() << std::endl;
}