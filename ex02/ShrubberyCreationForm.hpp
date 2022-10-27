/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:42:31 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 12:18:05 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string const target;
	void createShrubbery(std::fstream &file) const;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat &executor) const;

	ShrubberyCreationForm & operator =(ShrubberyCreationForm const & src);
};

#endif
