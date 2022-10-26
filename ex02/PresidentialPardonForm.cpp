/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:37:15 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/23 12:36:31 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
	std::cout << "Default constructor [PresidentialPardonForm] " << this->getName() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor [PresidentialPardonForm] " << this->getName() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	std::cout << "Copy constructor [PresidentialPardonForm] " << this->getName() << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(std::string & target) : Form("Presidential Pardon Form", 25, 5), target(target)
{
	std::cout << "Constructor [PresidentialPardonForm] " << this->getName() << std::endl;
}