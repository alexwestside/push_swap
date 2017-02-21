
#include "push_swap.h"

void ft_fill_stack(int val, t_stack *a)
{
	t_stack *list;
	t_stack *tail;

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
		while(list->next)
			list = list->next;
		tail = list;
		list->next = (t_stack *)malloc(sizeof(t_stack));
		list = list->next;
		list->prev = tail;
		list->next = NULL;
	}
}

void ft_val_check(char **av)
{
	char **s;
	char *p;

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
		if (ft_atoi(p) > MAX_INT || ft_atoi(p) < MIN_INT)
			ft_error();
		s++;
	}
}

void ft_check_and_fill(char **av, t_stack *a)
{
	int val;

	val = 0;
	ft_val_check(av);
	while (*av)
	{
		val = ft_atoi(*av);
		ft_fill_stack(val, a);
		av++;
	}
}

int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;
	ac < 2 ? ft_usage(*av) : av++;
	ft_check_and_fill(av, a);

	return 0;
}
