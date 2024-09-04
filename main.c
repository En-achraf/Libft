#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{	
    char *str = "achraf";
    printf("this the result of the real one function %d\n", strncmp(str, "Heeol", 3));
    printf("this the result of FT_function %d\n", ft_strncmp(str, "Heeol", 3));
    return 0;
}
