#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
    if(n == -2147483648) {
        write(fd, "-2147483648", 11);
    }
    else if (n >= 0 && n <= 9)
    {
        ft_putchar_fd(n + 48, fd);
    }
    else if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
        ft_putnbr_fd(n, fd);
    }
    else if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}
