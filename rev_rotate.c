
#include "push_swap.h"

void ft_rev_rotate(t_stack **a)
{
	t_stack *list;
	t_stack *tail;

	list = *a;
	while(list->next)
		list = list->next;
	tail = list->prev;
	tail->next = NULL;
	list->prev = NULL;
	list->next = *a;
	(*a)->prev = list;
	(*a) = list;
}
