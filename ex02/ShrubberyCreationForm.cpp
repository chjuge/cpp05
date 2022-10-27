/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:44:07 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 12:32:07 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137)
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

ShrubberyCreationForm & ShrubberyCreationForm::operator =(ShrubberyCreationForm const & src)
{
	return (*this);
}


void ShrubberyCreationForm::createShrubbery(std::fstream &file) const
{
	file << "                  %%%,%%%%%%%"  << std::endl;
	file << "               ,'%% \\-*%%%%%%%" << std::endl;
	file << "         ;%%%%%*%   _%%%%\"" << std::endl;
	file << "          ,%%%       \\(_.*%%%%." << std::endl;
	file << "          % *%%, ,%%%%*(    '" << std::endl;
	file << "        %^     ,*%%% )\\|,%%*%,_" << std::endl;
	file << "             *%    \\/ #).-\"*%%*" << std::endl;
	file << "                 _.) ,/ *%," << std::endl;
	file << "         _________/)#(_____________" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw ShrubberyCreationForm::FormUnsiged();
	if (!isGradeInRange(executor.getGrade(),
						  1,
						  this->getReqExec()))
		throw ShrubberyCreationForm::GradeTooLowException();
	std::string file_name = this->target + "_shrubbeery";
	std::fstream file(file_name, std::ios::out);
	this->createShrubbery(file);
}
