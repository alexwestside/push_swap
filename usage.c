
#include "push_swap.h"

void ft_error(void)
{
	ft_putendl("Error");
	exit(EXIT_FAILURE);
}

void ft_usage(char *av)
{
	ft_putendl("usage: ");
	ft_putstr(av);
	ft_putendl("\t use number >= -2147483648 and <= 2147483647");
	ft_putendl("\t -v fot [status operation mode]");
	ft_putendl("\t -c fot [color mode]");
	ft_putendl("\t -o for [number operation mode]");
	ft_putendl("\t -i for [start and end mode]");
	ft_putendl("\t -a for [enable all mode]");
	ft_putendl("\t -s for [disable all mode]");
	exit(EXIT_FAILURE);
}



