#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

void ft_putnbr_fd(int n, int fd);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strdup(const char *s1);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_itoa(int n);
int ft_atoi(const char *nptr);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_putendl_fd(char *s, int fd);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void *ft_calloc(size_t nitems, size_t size);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);

#endif