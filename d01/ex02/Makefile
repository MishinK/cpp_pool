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

NAME = plucking_some_brains
COMPIL = clang++ -Wall -Werror -Wextra -std=c++98
SRCS = ./*.cpp

all: $(NAME)

$(NAME):
	$(COMPIL) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
