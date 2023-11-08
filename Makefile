NAME = libft.a

CC = cc
Cflags = -Wall -Wextra -Werror
RM = rm -f
ARC = ar rc 
srcs = ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_memset.c \
	ft_memmove.c ft_memcpy.c ft_memchr.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_bzero.c ft_atoi.c \
	ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c

objs = $(srcs:.c=.o)

$(NAME) : $(objs)
	$(ARC) $(NAME) $(objs)

%.o : %.c 
	$(CC) $(Cflags) -c $< -o $@

all:$(NAME)

clean:
	$(RM) $(objs)

fclean : clean 
	$(RM) $(NAME)

re : fclean all