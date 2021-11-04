NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFILES = $(wildcard *.c)
H_LIB = libft.h
OBJS = $(SRCS:.c=.o)
SRCS = $(CFILES) $(H_LIB)

all: $(NAME)

$(NAME): $(OBJS)
	#$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
