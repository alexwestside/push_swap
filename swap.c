
#include "push_swap.h"

void ft_swap(t_stack **a)
{
	t_stack *list;
	t_stack *tail;

	list = *a;
	tail = *a;

	tail = list->next;
	list = tail->next;
	(*a)->next = list;
	(*a)->prev = tail;
	tail->prev = NULL;
	tail->next = *a;
	list->prev = *a;
	*a = tail;
}

