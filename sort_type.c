
#include "push_swap.h"

void ft_sort_in_type_0(t_stack **head, t_type **res, int id)
{
    return;
}

void ft_sort_in_type_1(t_stack **head, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;

    tail = (*head)->next;
    list = tail->next;
    if (!list->next)
    {
        ft_rev_rotate(head, res, id);
        ft_swap(head, res, id);
    }
    else
    {
        ft_rotate(head, res, id);
        ft_swap(head, res, id);
        ft_rev_rotate(head, res, id);
    }
}

void ft_sort_in_type_2(t_stack **head, t_type **res, int id)
{
    ft_swap(head, res, id);
}

void ft_sort_in_type_3(t_stack **head, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;

    tail = (*head)->next;
    list = tail->next;
    if (!list->next)
        ft_rev_rotate(head, res, id);
    else
    {
        ft_rotate(head, res, id);
        ft_swap(head, res, id);
        ft_rev_rotate(head, res, id);
        ft_swap(head, res, id);
    }
}

void ft_sort_in_type_4(t_stack **head, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;

    tail = (*head)->next;
    list = tail->next;
    if (!list->next)
    {
        ft_rotate(head, res, id);
        ft_swap(head, res, id);
    }
    else
    {
        ft_swap(head, res, id);
        ft_rotate(head, res, id);
        ft_swap(head, res, id);
        ft_rev_rotate(head, res, id);
        ft_swap(head, res, id);
    }
}

void ft_sort_in_type_5(t_stack **head, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;

    tail = (*head)->next;
    list = tail->next;
    if (!list->next)
        ft_rotate(head, res, id);
    else
    {
        ft_swap(head, res, id);
        ft_rotate(head, res, id);
        ft_swap(head, res, id);
        ft_rev_rotate(head, res, id);
    }
}
