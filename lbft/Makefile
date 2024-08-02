CC = CC
FLAGS = -Wall -Wextra -Werror

SRCDER = *.c
INDER = *.h

SRC = $(SRCDER)/*.c
OBj = $(SRC:$(SRCDIR)/%.c=$(SRCDER)/%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

$(SRCDER)/%.o: $(SRCDIR)/%.c $(INCDIR)/*.h | $(SRCDER)
	$(CC) $(FLAGS) -I$(INCDIR) -c $< -o $@

$(OBJDIR):
	mkdir -p $(SRCDIR)

clean:
	rm -rf $(SRCDER)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re