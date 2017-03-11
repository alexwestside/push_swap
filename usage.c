
#include "push_swap.h"

void			ft_error(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void			ft_usage(char *av)
{
	ft_printf("usage: %s\n", av);
	ft_printf("use number >= -2147483648 and <= 2147483647\n");
	exit(EXIT_FAILURE);
}

long long int	ft_atoi_push_swap(char *s)
{
	long long int res;
	int sign;

	res = 0;
	sign = 0;
	if (!*s)
		ft_error();
	if (*s == '-' || *s == '+')
	{
		sign = *s == '-' ? -1 : 1;
		s++;
	}
	while (*s)
		res = res * 10 + *(s++) - 48;
	res = sign < 0 ? res * sign : res;
	if (res > MAX_INT || res < MIN_INT)
		ft_error();
	return (res);
}

void ft_exit_success(t_stack *a)
{
	if (!a->next)
	{
		ft_printf("Stack with ONE elemend is alredy ordered!!!\n");
		ft_print_stack(&a, NULL);
		exit(EXIT_SUCCESS);
	}
	if (!ft_if_is_sorted(a))
	{
		ft_printf("Stack is alredy ordered!!!\n");
		ft_print_stack(&a, NULL);
		exit(EXIT_SUCCESS);
	}
}

void ft_print_stack(t_stack **a, t_stack **b)
{
	t_stack *list1;
	t_stack *list2;

	if (!a || !b)
		return;
	list1 = *a;
	list2 = *b;
	ft_printf("----------------   ----------------\n");
	ft_printf("| STACK: [ A ] |   | STACK: [ B ] |\n");
	ft_printf("----------------   ----------------\n");
	while (list1 || list2)
	{
		if (list1)
		{
			ft_printf("|%8d%7|", list1->val);
			list1 = list1->next;
		}
		else
			ft_printf("|%15|");
		ft_printf("   ");
		if (list2)
		{
			ft_printf("|%8d%7|", list2->val);
			list2 = list2->next;
		}
		else
			ft_printf("|%15|");
		ft_printf("\n");
	}
	ft_printf("----------------   ----------------");
	ft_printf("\n");
}


int ft_if_is_sorted(t_stack *a)
{
	t_stack *list;
	int val;

	list = a;
	val = list->val;
	while (list)
	{
		if (val > list->val)
			return (1);
		val = list->val;
		list = list->next;
	}
	return (0);
}

void ft_check_dublicates(int val, t_stack *a)
{
	t_stack *list;

	list = a;
	while (list)
	{
		if (val == list->val)
			ft_error();
		list = list->next;
	}
}
