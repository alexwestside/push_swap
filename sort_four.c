
#include "push_swap.h"

int serch_four(t_stack **head)
{
    t_stack *list;
    t_stack *tail;
    t_stack *p;

    list = (*head)->next;
    tail = list->next;
    p = tail->next;

    if (p->val > tail->val && p->val > list->val && p->val > (*head)->val)
        return (3);
    if (tail->val > p->val && tail->val > list->val && tail->val > (*head)->val)
        return (2);
    if (list->val > p->val && list->val > tail->val && list->val > (*head)->val)
        return (1);
    if ((*head)->val > p->val && (*head)->val > tail->val && (*head)->val > list->val)
        return (0);
    else
        return (-1);
}

void ft_four_norm_sort(t_stack **head, int len, t_type **res, int id)
{
    int i;

    i = serch_four(head);
    if (i == 3)
    {

    }
    if (i == 2)
    {

    }
    if (i == 1)
    {

    }
    if (i == 0)
    {

    }
}
