#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main() 
{
    char a[] = "achraf";
    char b[] = "achraf";
    int i = ft_strncmp(b, a, 4);
    printf("this the ft : %d\n", i);
    i = strncmp(b, a, 4);
    printf("this is the real one : %d\n", i);
    return 0;
}