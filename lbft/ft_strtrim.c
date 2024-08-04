#include "libft.h"

char *strchr(const char *s, int c) {
    while (*s) {
        if (*s == c)
            return (char *)s;
        s++;
    }
    return NULL;
}

int ft_strlen(char *str) {
    int i;
    i = 0;
    while (*str++)
        i++;
    return i;
}

char *ft_strtrim(char const *s1, char const *set) {
    int i;
    int j;
    char *str;
    i =  0;
    j  = 0;
    str = malloc(sizeof(char) *ft_strlen(s1) + 1);
    if(!str)
        return NULL;
    while(s1[i] && strchr(set, s1[i]))
        i++;
    while(s1[i] && s1[i])    
        str[j++] = s1[i++];
    str[j] = '\0';
    return str;
}