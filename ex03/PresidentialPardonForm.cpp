/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:37:15 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 18:01:30 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5)
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

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("Presidential Pardon Form", 25, 5), target(target)
{
	std::cout << "Constructor [PresidentialPardonForm] " << this->getName() << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator =(PresidentialPardonForm const & src)
{
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw PresidentialPardonForm::FormUnsiged();
	if (!isGradeInRange(executor.getGrade(),
						  1,
						  this->getReqExec()))
		throw PresidentialPardonForm::GradeTooLowException();
	
	std::cout << this->target << " has been pardoned by Zaphod Beedlebrox" << std::endl;
}
