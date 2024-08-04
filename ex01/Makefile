# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 01:22:49 by amakela           #+#    #+#              #
#    Updated: 2024/08/05 01:57:02 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombieHorde

CPPFILES	=	src/main.cpp	src/Zombie.cpp	src/zombieHorde.cpp
 
OFILES		=	$(CPPFILES:.cpp=.o)

HEADERS		=	-I include

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror

%.o:%.cpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
