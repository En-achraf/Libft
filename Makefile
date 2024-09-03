# Variables
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS = $(wildcard *.c)        # List all .c files in the directory
HEADERFILE = libft.h
OBJS = $(SRCS:.c=.o)          # Object files corresponding to source files

NAME = libft.a                # The name of the static library

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	@ar rcs $@ $^

# Rule to compile .c files to .o files
%.o: %.c $(HEADERFILE)
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS)

# Remove all build files and generated files
fclean: clean
	rm -f $(NAME)

# Build everything from scratch
re: fclean all
