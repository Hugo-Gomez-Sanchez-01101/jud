#include "libft.h"
#include <unistd.h>

void ft_putstr(const char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

