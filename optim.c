
#include "push_swap.h"

void    ft_optim(t_type **head)
{
    int i;

    while (1)
    {
        if (!ft_optim_2(head, 0))
            break;
    }
}

int ft_optim_2(t_type **head, int i)
{
    t_type *list;
    t_type *tail;

    tail = *head;
    list = tail->next;
    while (list)
    {
        if (list->s && ft_optim_del(list))
        {
            tail->next = list->next->next;
            list = tail->next;
            i++;
        }
        else if (list->s && ft_optim_change(list))
            ft_optim_change_type(&list, &i);
        else
        {
            tail = list;
            list = list->next;
        }
    }
    return (i);
}

void ft_optim_change_type(t_type **list, int *i)
{
    if (!ft_strcmp((*list)->s, "SA") || !ft_strcmp((*list)->s, "SB"))
    {
        (*list)->next = (*list)->next->next;
        (*list)->s = "SS";
    }
    else if (!ft_strcmp((*list)->s, "RA") || !ft_strcmp((*list)->s, "RB"))
    {
        (*list)->next = (*list)->next->next;
        (*list)->s = "RR";
    }
    else if (!ft_strcmp((*list)->s, "RRA") || !ft_strcmp((*list)->s, "RRB"))
    {
        (*list)->next = (*list)->next->next;
        (*list)->s = "RRR";
    }
    (*i)++;
}

int ft_optim_del(t_type *list)
{
    if (!ft_strcmp(list->s, "PA") && !ft_strcmp(list->next->s, "PB"))
        return (1);
    if (!ft_strcmp(list->s, "PB") && !ft_strcmp(list->next->s, "PA"))
        return (1);
    if (!ft_strcmp(list->s, "RA") && !ft_strcmp(list->next->s, "RRA"))
        return (1);
    if (!ft_strcmp(list->s, "RRA") && !ft_strcmp(list->next->s, "RA"))
        return (1);
    if (!ft_strcmp(list->s, "RB") && !ft_strcmp(list->next->s, "RRB"))
        return (1);
    if (!ft_strcmp(list->s, "RRB") && !ft_strcmp(list->next->s, "RB"))
        return (1);
    return (0);
}

int ft_optim_change(t_type *list)
{
    if (!ft_strcmp(list->s, "SA") && !ft_strcmp(list->next->s, "SB"))
        return (1);
    if (!ft_strcmp(list->s, "SB") && !ft_strcmp(list->next->s, "SA"))
        return (1);
    if (!ft_strcmp(list->s, "RA") && !ft_strcmp(list->next->s, "RB"))
        return (1);
    if (!ft_strcmp(list->s, "RB") && !ft_strcmp(list->next->s, "RA"))
        return (1);
    if (!ft_strcmp(list->s, "RRA") && !ft_strcmp(list->next->s, "RRB"))
        return (1);
    if (!ft_strcmp(list->s, "RRB") && !ft_strcmp(list->next->s, "RRA"))
        return (1);
    return (0);
}