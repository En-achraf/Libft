#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    unsigned char *str;
    size_t i;

    i = 0;
    str = (unsigned char *)s;
    while (n > i) {
        if(*str == (unsigned char)c)
            return (void *)str;
        str++;
        i++;
    }
    return NULL;
}
