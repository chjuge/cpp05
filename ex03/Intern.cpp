/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:56:50 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 18:01:01 by mproveme         ###   ########.fr       */
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

Form * makePresPa(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form * makeShrubb(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form * makeRoboto(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form * Intern::makeForm(std::string const &formName, std::string const &target) const
{
	std::string forms_name[] = {SHRUBB, ROBREQ, PRESPA};
	typedef Form* (*func)(std::string const & target);
	func forms_exe[] = {&makeShrubb, &makeRoboto, &makePresPa};
	for (int i = 0; i < 3; i++)
	{
		if (forms_name[i] == formName)
		{
			Form * res = forms_exe[i](target);
			std::cout << "Intern creates " << res->getName() << std::endl;
			return (res);
		}
	}
	std::cout << "Intern can't create the form [" << formName << "]\n";
	return (nullptr);
}
