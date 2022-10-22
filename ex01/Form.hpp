/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:17:09 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/22 19:13:37 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const name;
	int const	req_grade_sign;
	int const	req_grade_exec;
	bool isSigned;

	static int const grade_max = 1;
	static int const grade_min = 150;

public:
	Form();
	Form(std::string name, int grade_sign, int grade_exec);
	Form(Form const & src);
	~Form();

	Form & operator = (Form const & src);

	int getReqSign() const;
	int getReqExec() const;
	bool getIsSigned() const;
	std::string getName() const;
	bool beSigned(Bureaucrat & b);
	void checkGrade(int grade) const;

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

std::ostream & operator <<(std::ostream & stream, Form const & src);
bool isGradeInRange(int const grade, int const max, int const min);

#endif