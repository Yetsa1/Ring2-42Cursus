SRC	= get_next_line_utils.c \
		get_next_line.c \

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = get_next_line.a

OBJ = $(SRC:.c=.o)

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		
re: fclean all

.PHONY: clean fclean re