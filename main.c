
#include "push_swap.h"

t_stack	*ft_fill_stack(int val, t_stack *a)
{
	t_stack	*list;
	t_stack	*tail;

	list = a;
	if (!a)
	{
		a = (t_stack *)malloc(sizeof(t_stack));
		a->prev = NULL;
		a->next = NULL;
		a->val = val;
	}
	else
	{
		tail = (t_stack *)malloc(sizeof(t_stack));
		tail->next = list;
		list->prev = tail;
		tail->prev = NULL;
		tail->val = val;
		a = tail;
	}
	return (a);
}

void	ft_val_check(char **av)
{
	char	**s;
	char	*p;

	s = av;
	while (*s)
	{
		p = *s;
		while (**s)
		{
			if (**s == '-' || **s == '+')
				(*s)++;
			if (ft_isalpha(**s) || !**s || ft_isspace(**s) || **s < 32)
				ft_error();
			(*s)++;
		}
		ft_atoi_push_swap(p);
		*s = p;
		s++;
	}
}

t_stack	*ft_check_and_fill(char **av, t_stack *a)
{
	int	val;

	ft_val_check(av);
	while (*av)
	{
		val = ft_atoi(*av);
		ft_check_dublicates(val, a);
		a = ft_fill_stack(val, a);
		av++;
	}
	return (a);
}

int		main(int ac, char **av)
{
	t_stack			*a;
	t_stack			*b;
	static t_type	*res;
	t_type			*head;

	a = NULL;
	b = NULL;
	res = (t_type *)malloc(sizeof(t_type));
	res->next = NULL;
	res->s = NULL;
	head = res;
	ac < 2 ? ft_usage(*av) : av++;
	a = ft_check_and_fill(av, a);
	ft_exit_success(a);
	ft_sort_sotution(a, b, res);
	ft_optim(&head);
	ft_print_res(head);
	return (0);
}
