# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 18:52:44 by mproveme          #+#    #+#              #
#    Updated: 2022/10/27 16:58:27 by mproveme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp\
			Bureaucrat.cpp\
			Form.cpp\
			ShrubberyCreationForm.cpp\
			PresidentialPardonForm.cpp\
			RobotomyRequestForm.cpp\
			Intern.cpp


OBJS	= 	$(SRCS:.cpp=.o)

HEAD	=	Bureaucrat.hpp\
			Form.hpp\
			ShrubberyCreationForm.hpp\
			PresidentialPardonForm.hpp\
			RobotomyRequestForm.hpp\
			Intern.hpp
			
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

NAME	=	bureaucrat

all:		$(NAME)

%.o:		%.c	$(HEAD) 
			$(CC) $(CFLAGS) -cpp $< -o $@

$(NAME):	$(OBJS) $(HEAD) 
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re 