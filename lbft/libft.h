#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

void ft_putnbr_fd(int n, int fd);
void ft_putchar_fd(char c, int fd);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strdup(const char *s1);
char *ft_strchr(const char *s, int c);
int ft_strlen(char *str);
int ft_atoi(const char *str);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
