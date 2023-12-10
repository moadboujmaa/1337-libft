SRC = ft_atoi.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_tolower.c ft_calloc.c ft_isprint.c ft_memset.c ft_strlen.c ft_toupper.c ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_isalpha.c ft_memcmp.c ft_strdup.c  ft_strnstr.c ft_substr.c ft_strjoin.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_strtrim.c ft_putnbr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c main.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all