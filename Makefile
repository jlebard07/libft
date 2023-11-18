# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlebard <jlebard@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 17:20:10 by jlebard            #+#    #+#              #
#    Updated: 2023/11/18 17:20:10 by jlebard           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#changer WINDOWS en no sur UNIX

WINDOWS = yes

ifeq ($(WINDOWS), yes)
	CLEAN = Remove-Item *.o -Recurse -Force
else
	CLEAN = rm -rf *.o
endif

ifeq ($(WINDOWS), yes)
	FCLEAN = Remove-Item $(LIB)
else
	FCLEAN = rm -rf *.o
endif

ifeq ($(WINDOWS), yes)
	EXEC = prog.exe
else
	EXEC = prog
endif

CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAGS = $(-Wall -Wextra -Werror)
LIBFT = libft.a

%.o : .%c 
	$(CC) -o $@ -c $< $(CFLAGS)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^

all : $(LIBFT)

clean :
	$(CLEAN)

fclean : clean
	$(FCLEAN)

re : fclean all
