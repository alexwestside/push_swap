
#include "push_swap.h"

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
    if ((*head)->next)
    {
        (*res)->s = !id ? "rra" : "rrb";
        (*res)->next = (t_type *) malloc(sizeof(t_type));
        *res = (*res)->next;
        (*res)->next = NULL;
    }
}

void ft_rrev_rotate(t_stack **a, t_stack **b, t_type **res, int id)
{
    ft_rev_rotate(a, res, id);
    ft_rev_rotate(b, res, id);

    (*res)->s = "rrr";
    (*res)->next = (t_type *)malloc(sizeof(t_type));
    *res = (*res)->next;
    (*res)->s = NULL;
    (*res)->next = NULL;
}