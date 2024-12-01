CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

FILES = ft_printf.c  ft_putchar.c  ft_putnbr.c  ft_putstr.c

FILES_O = $(FILES:.c=.o)

$(NAME) : $(FILES_O)
	ar -r $(NAME) $(FILES_O)

all : $(NAME)

clean :
	rm -f $(FILES_O)

fclean :
	rm -f $(NAME) $(FILES_O)

re : fclean all

.PHONY : clean fclean re all
