
#include "push_swap.h"

/*
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
*/

void ft_rotate(t_stack **head, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;

    if (*head)
    {
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
    (*res)->s = !id ? "RA" : "RB";
    (*res)->next = (t_type *)malloc(sizeof(t_type));
    *res = (*res)->next;
    (*res)->next = NULL;
}

void ft_rrotate(t_stack **a, t_stack **b, t_type **res, int id)
{
    ft_rotate(a, res, id);
    ft_rotate(b, res, id);
}
