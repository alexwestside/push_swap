
#include "push_swap.h"

int ft_check_size(t_stack *head)
{
	t_stack *list;
	int size;

	list = head;
	size = 0;
	if (!list->next)
		return (1);
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}

int ft_pivot(t_stack **head, int len, int i, int j, int pivot)
{
	t_stack *list;
	t_stack *p;
	int n1;
	int n2;

	p = *head;
	while (++i < len)
	{
		list = *head;
		j = -1;
		n1 = 0;
		n2 = 0;
		pivot = p->val;
		while (++j < len)
		{
			if (pivot < list->val)
				n1++;
			else if (pivot > list->val)
				n2++;
			if (n1 > len / 2 || n2 > len / 2)
			{
				p = p->next;
				break;
			}
			list = list->next;
		}
	}
	return (pivot);
}

int ft_check_need(t_stack **a, int pivot, int len)
{
	t_stack *list;

	list = *a;
	while (len)
	{
		if (list->val <= pivot)
			return (1);
		list = list->next;
		len--;
	}
	return (0);
}

int ft_rev_check_need(t_stack **a, int pivot, int len)
{
	t_stack *list;

	list = *a;
	while (len)
	{
		if (list->val >= pivot)
			return (1);
		list = list->next;
		len--;
	}
	return (0);
}

void ft_print_res(t_type *head)
{
	t_type *list;

	list = head;
	while (list->s)
	{
		ft_printf("%s\n", list->s);
		list = list->next;
	}
}
