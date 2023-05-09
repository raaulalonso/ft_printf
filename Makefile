CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putnbr_fd.c ft_putnbr_unsigned.c ft_puthex.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean :
	rm -rf *.o

fclean :
	rm -rf $(NAME) *.o

re: clean all