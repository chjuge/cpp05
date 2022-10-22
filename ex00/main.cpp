/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:56:44 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/22 15:09:37 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat joel = Bureaucrat("Joel", 1);
		std::cout << joel << std::endl;
		joel.decrementGrade();
		std::cout << joel << std::endl;
		joel.incrementGrade();
		std::cout << joel << std::endl;
		joel.incrementGrade();
		std::cout << joel << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat joel2 = Bureaucrat("Joel2", 150);
		std::cout << joel2 << std::endl;
		joel2.incrementGrade();
		std::cout << joel2 << std::endl;
		joel2.decrementGrade();
		std::cout << joel2 << std::endl;
		joel2.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat joel3 = Bureaucrat("Joel3", 0);
		std::cout << joel3 << std::endl;
		joel3.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat	joel4 = Bureaucrat("Joel4", 111);
		Bureaucrat joel5 = Bureaucrat();
		std::cout << joel4 << std::endl;
		std::cout << joel5 << std::endl;
		joel5 = joel4;
		joel4.decrementGrade();
		std::cout << joel4 << std::endl;
		std::cout << joel5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}