/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:18:07 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/22 19:16:40 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
: name("Unknown"), req_grade_sign(150), req_grade_exec(150), isSigned(false)
{
	std::cout << "Default constructor [Form] " << this->name << std::endl;
}

Form::Form(std::string name, int grade_sign, int grade_exec)
: name(name), req_grade_sign(grade_sign), req_grade_exec(grade_exec), isSigned(false)
{
	this->checkGrade(this->req_grade_sign);
	this->checkGrade(this->req_grade_exec);
	std::cout << "Constructor [Form] " << this->name << std::endl;
}

Form::Form(Form const & src)
: name(src.name), req_grade_exec(src.req_grade_exec), req_grade_sign(src.req_grade_sign), isSigned(src.isSigned)
{
	std::cout << "Copy constructor [Form] " << this->name << std::endl;
}

Form::~Form()
{
	std::cout << "Destructor [Form] " << this->name << std::endl;
}

Form & Form::operator=(Form const & src)
{
	this->isSigned = src.isSigned;

	return (*this);
}

int Form::getReqSign() const
{
	return (this->req_grade_sign);
}
int Form::getReqExec() const
{
	return (this->req_grade_exec);
}

std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

bool Form::beSigned(Bureaucrat & b)
{
	if (isGradeInRange(b.getGrade(),
						this->grade_max,
						this->req_grade_sign))
		this->isSigned = true;
	return (this->isSigned);
}

std::ostream & operator <<(std::ostream & stream, Form const & src)
{
	stream << src.getName() << " require grades: " << src.getReqSign() << " for sign and ";
	stream << src.getReqExec() << " for execution. It's status: ";
	src.getIsSigned() ? stream << "Signed" : stream << "Doesn't signed";

	return (stream);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("This grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("This grade is too low");
}

void Form::checkGrade(int grade) const
{
	if (grade < this->grade_max)
		throw Form::GradeTooHighException();
	if (grade > this->grade_min)
		throw Form::GradeTooLowException();
}

bool isGradeInRange(int const grade, int const max, int const min)
{
	if (grade < max || grade > min)
		return (false);
	return (true);
}
