CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar r


SRC = ft_printf.c\
	ft_digits_count.c\
	ft_putaddress.c\
	ft_putchar.c\
	ft_puthex.c\
	ft_putnbr.c\
	ft_putunbr.c\
	ft_putstr.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all