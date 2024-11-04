CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isascii.c ft_lstnew.c ft_memset.c ft_strlen.c ft_toupper.c ft_bzero.c \
 ft_isdigit.c ft_lstsize.c ft_strchr.c ft_isalnum.c ft_isprint.c \
 ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_isalpha.c ft_lstadd_front.c ft_memmove.c ft_strlcpy.c ft_tolower.c \
 ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
 ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c

OBJECTS = $(SRCS:.c=.o)
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean : 
	@rm -rf $(OBJECTS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all