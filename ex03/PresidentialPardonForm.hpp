/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:32:09 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 12:22:23 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string const target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string & target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm();

	void execute(const Bureaucrat &executor) const;

	PresidentialPardonForm & operator =(PresidentialPardonForm const & src);
};

#endif
