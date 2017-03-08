
#include "push_swap.h"

void ft_f_rev_sort(t_stack **head, int len, t_type **res, int id)
{
    int i;

    i = 0;
    if (len == 1 || len == 2)
        ft_s_rev_sort(head, len, res, id);
    else
    {
        i = ft_check_r_sort_type(head);
        i == 0 ? ft_sort_in_type_0(head, res, id) : 0;
        i == 1 ? ft_sort_in_type_1(head, res, id) : 0;
        i == 2 ? ft_sort_in_type_2(head, res, id) : 0;
        i == 3 ? ft_sort_in_type_3(head, res, id) : 0;
        i == 4 ? ft_sort_in_type_4(head, res, id) : 0;
        i == 5 ? ft_sort_in_type_5(head, res, id) : 0;
    }
}

void ft_s_rev_sort(t_stack **head, int len, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;

    list = *head;
    tail = list->next;
    if (len == 1)
        return;
    else if (len == 2)
    {
        if (list->val < tail->val)
            ft_swap(head, res, id);
    }
}

int ft_check_r_sort_type(t_stack **head)
{
    t_stack *list;
    t_stack *tail;

    list = (*head)->next;
    tail = list->next;
    if ((*head)->val > list->val && (*head)->val > tail->val && list->val > tail->val)
        return (0);
    else if ((*head)->val > list->val && (*head)->val > tail->val && list->val < tail->val)
        return (1);
    else if ((*head)->val < list->val && (*head)->val > tail->val && list->val > tail->val)
        return (2);
    else if ((*head)->val > list->val && (*head)->val < tail->val && list->val < tail->val)
        return (3);
    else if ((*head)->val < list->val && (*head)->val < tail->val && list->val < tail->val)
        return (4);
    else if ((*head)->val < list->val && (*head)->val < tail->val && list->val > tail->val)
        return (5);
    else
        return (-1);
}