#include "libft.h"

int ft_atoi(const char *nptr) {
	int res;
	int sign;
	int i;

	i = 0;
	while(nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;

	sign = 1;
	while(nptr[i] == '+' || nptr[i] == '-') {
		if(nptr[i] == '-')
			sign *= -1;
		i++;
	}

	res = 0;
	while(nptr[i] >= '0' && nptr[i] <= '9') {
		res = res * 10 + (nptr[i] - 48);
		i++;
	}

	return (sign * res);
}