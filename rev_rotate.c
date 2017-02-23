
#include "push_swap.h"

void ft_rev_rotate(t_stack **head)
{
	t_stack *list;
	t_stack *tail;

	list = *head;
	while(list->next)
		list = list->next;
	tail = list->prev;
	tail->next = NULL;
	list->prev = NULL;
	list->next = *head;
	(*head)->prev = list;
	(*head) = list;
}

void ft_rrev_rotate(t_stack **a, t_stack **b)
{
	ft_rev_rotate(a);
	ft_rev_rotate(b);
}
