# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/05 23:13:47 by aceauses          #+#    #+#              #
#    Updated: 2024/01/10 17:19:48 by aceauses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
SRCS = Contact.cpp PhoneBook.cpp Main.cpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
.PHONY: all clean fclean re