# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 13:58:50 by ashea             #+#    #+#              #
#    Updated: 2021/01/18 14:41:58 by ashea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
COMPIL = clang++ -Wall -Werror -Wextra -std=c++98
SRCS = ./*.cpp

all: $(NAME)

$(NAME):
	$(COMPIL) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

test: $(NAME)
	./$(NAME) 0
	./$(NAME) nan
	./$(NAME) +inff
	./$(NAME) -inf
	./$(NAME) 42
	./$(NAME) 42.0
	./$(NAME) 42.0f
	./$(NAME) 99999999999999999999999
	./$(NAME) abc
