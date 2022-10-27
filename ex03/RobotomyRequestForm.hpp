/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:38:45 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 18:03:52 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

class RobotomyRequestForm : public Form
{
private:
	std::string const target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();

	void execute(const Bureaucrat &executor) const;

	RobotomyRequestForm & operator =(RobotomyRequestForm const & src);
};

#endif
