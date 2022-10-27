/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:56:44 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 18:08:09 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp" 
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


void	addspace()
{
	std::cout << std::endl;
}


int main(void)
{

	addspace();
	addspace();
	Intern		intern;
	Bureaucrat	joel("Joel", 3);
	Form		*form;


	addspace();
	addspace();
	form = intern.makeForm("this one doesn't exist", "Justin");
	if (form)
		delete form;
	addspace();
	addspace();
	form = intern.makeForm(PRESPA, "Maynard");
	if (form)
		delete form;
	addspace();
	addspace();
	form = intern.makeForm(SHRUBB, "Danny");
	if (form)
		delete form;
	addspace();
	addspace();
	form = intern.makeForm(ROBREQ, "Adam");
	form->beSigned(joel);
	form->execute(joel);
	if (form)
		delete form;
}
