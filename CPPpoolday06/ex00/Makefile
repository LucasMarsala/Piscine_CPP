NAME = my_cat

CC = g++

## ========================================================================== ##
SRC	=	main.cpp		\

## ========================================================================== ##
OBJ	=	$(SRC:.cpp=.o)

CFLAGS = -D_GNU_SOURCE -W -Werror -Wall -Wextra -std=c++23

## ========================================================================== ##
all:	$(NAME)

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)


## ========================================================================== ##
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f *~
	@rm -f $(NAME)

re: fclean all

.PHONY: all rc clean fclean re

## ========================================================================== ##

%.o:	%.c
	@gcc $(CFLAGS) -o $@ -c $<

## ========================================================================== ##
