
#include "push_swap.h"

void ft_push(t_stack **a, t_stack **b)
{
	t_stack *list;
	t_stack *tail;

	if (!*b)
	{
		list = *a;
		*b = *a;
		list = list->next;
		*a = list;
		list->prev = NULL;
		(*b)->next = NULL;
		(*b)->prev = NULL;
	}
	else
	{
		list = *a;
		tail = *b;
		tail->prev = *a;
		tail = tail->prev;
		list = list->next;
		*a = list;
		tail->next = *b;
		*b = tail;
		list->prev = NULL;
		tail->prev = NULL;
	}
}
