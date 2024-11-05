CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isascii.c  ft_memset.c ft_strlen.c ft_toupper.c ft_bzero.c \
 ft_isdigit.c ft_strchr.c ft_isalnum.c ft_isprint.c \
 ft_memcpy.c ft_strlcat.c ft_strrchr.c ft_isalpha.c  ft_memmove.c ft_strlcpy.c ft_tolower.c \
 ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
 ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c ft_strmapi.c \
 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUSSRCS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJECTS = $(SRCS:.c=.o)
BONUSOBJECT = $(BONUSSRCS:.c=.o)
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus : $(BONUSOBJECT)
	@ar rcs $(NAME)  $(BONUSOBJECT)

clean :
	@rm -rf $(OBJECTS) $(BONUSOBJECT)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
