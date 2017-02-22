
#include "push_swap.h"

void ft_rotate(t_stack **a)
{
	t_stack *list;
	t_stack *tail;

	list = *a;
	while (list->next)
		list = list->next;
	tail = (*a)->next;
	list->next = (*a);
	(*a)->prev = list;
	tail->prev = NULL;
	(*a)->next = NULL;
	(*a) = tail;
}

