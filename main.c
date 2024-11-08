#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
///#include <fcntl.h>

int	main(void)
{
	// O_CREAT ==> create if not exist
	// O_RDWR ==> read and write
	// int fd = open("achraf.txt", O_CREAT | O_RDWR, 0644);
	// ft_putstr_fd("achraf hello", fd);
	// close(fd);
	// strdup(NULL, "hello", 0);
	///char *dest = ft_itoa(INT_MAX + 1);
	/*int i = 0;
	while (i < 6)
	{
		printf("the result is : %s\n", dest[i]);
		i++;
	}*/
	

	//printf("%s \n", dest);
	memchr(NULL, 'c', 5);

	return (0);
}