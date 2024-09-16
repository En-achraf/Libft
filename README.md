# Libft - Your Own C Library

## Introduction

Libft is a custom C library that contains implementations of commonly used functions in C. This library serves as a useful toolkit for future projects at school. The functions included in this library are inspired by standard C library functions, with some additional useful functions to build your projects.

## Mandatory Part

### Part 1 - Libc Functions

These are the re-implemented standard C library functions that follow the prototypes of the originals but with the prefix `ft_`. They do not require any external libraries.

- **`ft_isalpha`**: Checks if the character is an alphabetic letter.
- **`ft_isdigit`**: Checks if the character is a digit.
- **`ft_isalnum`**: Checks if the character is either a digit or an alphabetic letter.
- **`ft_isascii`**: Checks if the character is in the ASCII table.
- **`ft_isprint`**: Checks if the character is printable.
- **`ft_strlen`**: Calculates the length of a string.
- **`ft_memset`**: Fills a block of memory with a specified byte.
- **`ft_bzero`**: Sets all bytes in a memory block to zero.
- **`ft_memcpy`**: Copies a memory block to another.
- **`ft_memmove`**: Copies memory regions that might overlap.
- **`ft_strlcpy`**: Copies a string to a destination buffer, ensuring null-termination.
- **`ft_strlcat`**: Concatenates two strings, ensuring null-termination.
- **`ft_toupper`**: Converts lowercase letters to uppercase.
- **`ft_tolower`**: Converts uppercase letters to lowercase.
- **`ft_strchr`**: Locates the first occurrence of a character in a string.
- **`ft_strrchr`**: Locates the last occurrence of a character in a string.
- **`ft_strncmp`**: Compares two strings up to a specified number of characters.
- **`ft_memchr`**: Searches for a byte in a memory block.
- **`ft_memcmp`**: Compares two blocks of memory.
- **`ft_strnstr`**: Locates the first occurrence of a substring in a string, with a size limit.
- **`ft_atoi`**: Converts a string to an integer.
- **`ft_calloc`**: Allocates memory and initializes it to zero.
- **`ft_strdup`**: Duplicates a string using dynamic memory allocation.

### Part 2 - Additional Functions

These functions are not part of the standard library but are useful for string and memory manipulation.

- **`ft_substr`**: Extracts a substring from a string, starting at a given index with a specified length.
- **`ft_strjoin`**: Concatenates two strings into a new string.
- **`ft_strtrim`**: Removes specified characters from the beginning and the end of a string.
- **`ft_split`**: Splits a string into an array of substrings, separated by a given delimiter.
- **`ft_itoa`**: Converts an integer to its string representation.
- **`ft_strmapi`**: Applies a function to each character of a string, passing its index as the first argument.
- **`ft_striteri`**: Iterates over each character of a string and applies a function to each character.
- **`ft_putchar_fd`**: Outputs a character to the specified file descriptor.
- **`ft_putstr_fd`**: Outputs a string to the specified file descriptor.
- **`ft_putendl_fd`**: Outputs a string followed by a newline to the specified file descriptor.
- **`ft_putnbr_fd`**: Outputs an integer to the specified file descriptor.

## Bonus Part - Linked List Functions

These additional functions handle linked list operations. A linked list is a data structure that consists of nodes, where each node contains data and a pointer to the next node.

The list node structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```
### Libft Bonus Functions

This README covers the bonus functions implemented for the Libft project. These functions extend the basic functionality of the library to include operations on linked lists.
Table of Contents

   ## Introduction
# Functions
- **`ft_lstnew`
- **`ft_lstadd_front`
- **`ft_lstsize`
- **`ft_lstlast`
- **`ft_lstadd_back`
- **`ft_lstdelone`
- **`ft_lstclear`
- **`ft_lstiter`
- **`ft_lstmap`

## Introduction

The bonus part of the Libft project introduces functions for manipulating linked lists. These functions enable you to create, modify, and manage lists efficiently.
Functions
ft_lstnew

c

## t_list *ft_lstnew(void *content);

## Description: Allocates (with malloc(3)) and returns a new node. The content member is initialized with the value of the parameter content. The next member is initialized to NULL.

Parameters:

    content: The data to be stored in the node.

Returns: A pointer to the new node or NULL if the allocation fails.
ft_lstadd_front

c

## void ft_lstadd_front(t_list **lst, t_list *new);

## Description: Adds the node new at the beginning of the list.

Parameters:

    lst: The address of a pointer to the first link of a list.
    new: The node to be added to the list.

Returns: None.
ft_lstsize

c

## int ft_lstsize(t_list *lst);

## Description: Counts the number of nodes in a list.

Parameters:

    lst: The beginning of the list.

Returns: The number of nodes in the list.
ft_lstlast

c

## t_list *ft_lstlast(t_list *lst);

## Description: Returns the last node of the list.

Parameters:

    lst: The beginning of the list.

Returns: The last node of the list.
ft_lstadd_back

c

## void ft_lstadd_back(t_list **lst, t_list *new);

## Description: Adds the node new at the end of the list.

Parameters:

    lst: The address of a pointer to the first link of the list.
    new: The node to be added to the list.

Returns: None.
ft_lstdelone

c

## void ft_lstdelone(t_list *lst, void (*del)(void *));

## Description: Takes as a parameter a node and frees the memory of the node’s content using the function del and frees the node itself. The memory of next must not be freed.

Parameters:

    lst: The node to free.
    del: The address of the function used to delete the content.

Returns: None.
ft_lstclear

c

## void ft_lstclear(t_list **lst, void (*del)(void *));

## Description: Deletes and frees the given node and every successor of that node, using the function del and free(3). The pointer to the list must be set to NULL.

Parameters:

    lst: The address of a pointer to a node.
    del: The address of the function used to delete the content of the node.

Returns: None.
ft_lstiter

c

## void ft_lstiter(t_list *lst, void (*f)(void *));

## Description: Iterates the list lst and applies the function f on the content of each node.

Parameters:

    lst: The address of a pointer to a node.
    f: The address of the function used to iterate on the list.

Returns: None.
ft_lstmap

c

## t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

## Description: Iterates the list lst and applies the function f on the content of each node. Creates a new list resulting from the successive applications of the function f. The del function is used to delete the content of a node if needed.

Parameters:

    lst: The address of a pointer to a node.
    f: The address of the function used to iterate on the list.
    del: The address of the function used to delete the content of a node if needed.

Returns: The new list or NULL if the allocation fails.
