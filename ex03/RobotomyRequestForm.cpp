/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:40:22 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 12:36:25 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45)
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

RobotomyRequestForm & RobotomyRequestForm::operator =(RobotomyRequestForm const & src)
{
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw RobotomyRequestForm::FormUnsiged();
	if (!isGradeInRange(executor.getGrade(),
						  1,
						  this->getReqExec()))
		throw RobotomyRequestForm::GradeTooLowException();

	std::cout << "* Drilling noises *" << std::endl;
	std::cout << "\nRobotomization" << std::endl;
	for (int i=2; i>0; --i) 
	{
    	std::cout << "..." << std::endl;
		std::this_thread::sleep_for (std::chrono::seconds(1));
	}
	std::cout << std::endl;
	std::rand() % 2 ? std::cout << "Successfull!\n\n" : std::cout << "Failed!\n\n";
}