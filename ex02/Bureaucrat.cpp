/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:49:45 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/27 11:51:21 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150), name("Unknown")
{
	std::cout << "Default constructor [Bureaucrat] " << this->name << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : name(name)
{
	this->checkGrade(grade);
	this->grade = grade;
	std::cout << "Constructor [Bureaucrat] " << this->name << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : grade(src.grade), name(src.name)
{
	std::cout << "Copy constructor [Bureaucrat] " << this->name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor [Bureaucrat] " << this->name << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	this->grade = src.grade;

	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("This grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("This grade is too low");
}


void Bureaucrat::checkGrade(int grade)
{
	if (grade < this->grade_max)
		throw Bureaucrat::GradeTooHighException();
	if (grade > this->grade_min)
		throw Bureaucrat::GradeTooLowException();
}


std::ostream & operator <<(std::ostream & stream, Bureaucrat const & src)
{
	stream << src.getName() << ", bureaucrat grade " << src.getGrade();

	return (stream);
}

void Bureaucrat::incrementGrade()
{
	this->grade--;
	checkGrade(this->grade);
}

void Bureaucrat::decrementGrade()
{
	this->grade++;
	checkGrade(this->grade);
}


void Bureaucrat::signForm(Form & form)
{
	if (form.getIsSigned())
	{
		std::cout << "The form is already signed" << std::endl;
		return;
	}
	if (form.beSigned(*this))
		std::cout << this->name << " signed form " << form.getName() << std::endl;
	else
		std::cout << this->name << " couldn't sign form " << form.getName() << " because his grade isn't adequate" << std::endl;
}


void Bureaucrat::executeForm(Form const & form) const
{
	form.execute(*this);
	std::cout << this->name << " executed " << form.getName();
}
