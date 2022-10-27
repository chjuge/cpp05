/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:52:46 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 12:59:47 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern( void );
	Intern( const Intern &src );
	~Intern( void );

	Intern & operator=( const Intern &rhs );

	Form *makeForm(const std::string &formName, const std::string &target) const;

};

#endif