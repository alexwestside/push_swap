
#include "push_swap.h"

/*
void ft_swap(t_stack **head)
{
	t_stack *list;
	t_stack *tail;

	list = *head;
	tail = *head;

	tail = list->next;
	list = tail->next ? tail->next : tail;
	(*head)->prev = tail;
	tail->prev = NULL;
	(*head)->next = tail->next ? list :NULL;
	tail->next = *head;
	list->prev = *head;
	*head = tail;
}

void ft_sswap(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
}
*/

void ft_swap(t_stack **head)
{
	t_stack *list;
	t_stack *tail;

	if (*head)
	{
		if ((*head)->next)
		{
			list = *head;
			tail = *head;
			tail = list->next;
			list = tail->next ? tail->next : tail;
			(*head)->prev = tail;
			tail->prev = NULL;
			(*head)->next = tail->next ? list : NULL;
			tail->next = *head;
			list->prev = *head;
			*head = tail;
		}
	}
    //ft_printf("%s", SA)
}

void ft_sswap(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
}

