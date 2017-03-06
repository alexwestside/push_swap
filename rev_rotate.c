
#include "push_swap.h"

/*
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
*/

void ft_rev_rotate(t_stack **head, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;

    if (*head)
    {
        list = *head;
        while (list->next)
            list = list->next;
        tail = list->prev;
        tail->next = NULL;
        list->prev = NULL;
        list->next = *head;
        (*head)->prev = list;
        (*head) = list;
    }
    (*res)->s = !id ? "RRA" : "RRB";
    (*res)->next = (t_type *)malloc(sizeof(t_type));
    *res = (*res)->next;
    (*res)->next = NULL;
}

void ft_rrev_rotate(t_stack **a, t_stack **b, t_type **res, int id)
{
    ft_rev_rotate(a, res, id);
    ft_rev_rotate(b, res, id);
}