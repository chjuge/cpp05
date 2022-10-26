/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:40:22 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/23 12:41:58 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
	std::cout << "Default constructor [RobotomyRequestForm] " << this->getName() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor [RobotomyRequestForm] " << this->getName() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	std::cout << "Copy constructor [RobotomyRequestForm] " << this->getName() << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(std::string & target) : Form("Robotomy Request Form", 72, 45), target(target)
{
	std::cout << "Constructor [RobotomyRequestForm] " << this->getName() << std::endl;
}