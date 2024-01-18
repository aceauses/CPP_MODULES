# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/05 23:13:47 by aceauses          #+#    #+#              #
<<<<<<< HEAD:CPP1/ex00/Makefile
#    Updated: 2024/01/18 16:44:59 by aceauses         ###   ########.fr        #
=======
#    Updated: 2024/01/18 12:55:41 by aceauses         ###   ########.fr        #
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Makefile
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = graveyard
<<<<<<< HEAD:CPP1/ex00/Makefile
SRCS = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
=======
SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Makefile
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re