
#include "push_swap.h"

void ft_optim(t_type *head)
{
    t_type *list;
    t_type *tail;
    t_type *p;

    tail = head;
    list = head->next;
    p = list->next;
    while (list->s)
    {
        if (!ft_strcmp(tail->s , "sa") && !ft_strcmp(list->s, "sb"))
        {
            tail->next = list->next;
            tail->s = "ss";
            list->next = NULL;
            free(list);
            list = tail->next;
        }
        //if (tail->s == "RA" && list->s == "RRA");

        if (!ft_strcmp(tail->s, "ra") && !ft_strcmp(list->s, "rb"))
        {
            tail->next = list->next;
            tail->s = "rr";
            list->next = NULL;
            free(list);
            list = tail->next;
        }
        if (!ft_strcmp(tail->s, "rra") && !ft_strcmp(list->s, "rrb"))
        {
            tail->next = list->next;
            tail->s = "rrr";
            list->next = NULL;
            free(list);
            list = tail->next;
        }

        //if (tail->s == "RB" && list->s == "RRB");

        //if (tail->s == "PA" && list->s == "PB");
        //if (tail->s == "PB" && list->s == "PA");
        tail = tail->next;
        list = list->next;
    }
}