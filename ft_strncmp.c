#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    size_t i;
    unsigned char *src;
    unsigned char *dest;

    src = (unsigned char *)s2;
    dest = (unsigned char *)s1;
    i = 0;
    while ((dest[i] || src[i]) && n > i) {
        if(dest[i] != src[i])
            return (dest[i] - src[i]);
        i++;
    }
    return (0);
}
