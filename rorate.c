
#include "push_swap.h"

void ft_rotate(t_stack **head)
{
	t_stack *list;
	t_stack *tail;

	list = *head;
	while (list->next)
		list = list->next;
	tail = (*head)->next;
	list->next = (*head);
	(*head)->prev = list;
	tail->prev = NULL;
	(*head)->next = NULL;
	(*head) = tail;
}

void ft_rrotate(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
}

