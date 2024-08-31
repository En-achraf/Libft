#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
        size_t i;
        char *str;
        i = 0;
        str = malloc(sizeof(char) * len + 1);
        if(!str)
            return NULL;
        while(len > i) {
            str[i] = s[start + i];
            i++;
        }
        str[i] = '\0';
        return str;
}	