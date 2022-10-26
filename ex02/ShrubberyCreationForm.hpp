/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:42:31 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/23 12:43:56 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string const target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm & operator =(ShrubberyCreationForm const & src);
};

std::ostream & operator <<(std::ostream & stream, ShrubberyCreationForm const & src);


#endif
