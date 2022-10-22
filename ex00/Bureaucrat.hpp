/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:48:13 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/22 14:58:30 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	std::string const name;
	int grade;

	static int const grade_max = 1;
	static int const grade_min = 150;
public:
	Bureaucrat();
	Bureaucrat( std::string const & name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat & operator =(Bureaucrat const & src);

	int getGrade() const;
	std::string getName() const;

	void checkGrade(int grade);

	void incrementGrade();
	void decrementGrade();

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

std::ostream & operator <<(std::ostream & stream, Bureaucrat const & src);


#endif