/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:52:46 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 18:00:42 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# define ROBREQ "robotomy request"
# define PRESPA "presidential pardon"
# define SHRUBB "shrubberry creation"

class Intern
{
private:

public:
	Intern( void );
	Intern( const Intern &src );
	~Intern( void );

	Intern & operator=( const Intern &rhs );

	Form * makeForm(std::string const &formName, const std::string &target) const;

};

	Form * makePresPa(std::string const & target);
	Form * makeShrubb(std::string const & target);
	Form * makeRoboto(std::string const & target);

#endif