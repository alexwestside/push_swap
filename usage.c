
#include "push_swap.h"

void ft_error(void)
{
	ft_putendl("Error");
	exit(EXIT_FAILURE);
}

void ft_usage(char *av)
{
	ft_printf("usage: ");
	ft_putstr(av);
	ft_printf("\n");
	ft_putendl("use number >= -2147483648 and <= 2147483647");
	ft_putendl("\t -v fot [status operation mode]");
	ft_putendl("\t -c fot [color mode]");
	ft_putendl("\t -o for [number operation mode]");
	ft_putendl("\t -i for [start and end mode]");
	ft_putendl("\t -a for [enable all mode]");
	ft_putendl("\t -s for [disable all mode]");
	exit(EXIT_FAILURE);
}

long long int ft_atoi_push_swap(char *s)
{
	long long int res;
	int sign;

	res = 0;
	sign = 0;
	if (!*s)
		ft_error();
	if (*s == '-' || *s == '+')
	{
		sign = *s =='-' ? -1 : 1;
		s++;
	}
	while (*s)
		res = res * 10 + *(s++) - 48;
	res = sign < 0 ? res * sign : res;
	if (res > MAX_INT || res < MIN_INT)
		ft_error();
	else
		return (res);
}
