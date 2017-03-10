
#include "push_swap.h"

void ft_push(t_stack **a, t_stack **b, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;

    if (!*b)
    {
        list = *a;
        *b = *a;
        list =  list->next ? list->next : NULL;
        *a = list;
        list ? list->prev = NULL : 0;
        (*b)->next = NULL;
        (*b)->prev = NULL;
    }
    else if (*a)
    {
        list = *a;
        tail = *b;
        tail->prev = *a;
        tail = tail->prev;
        list = list->next ? list->next : NULL;
        *a = list;
        tail->next = *b;
        *b = tail;
        list ? list->prev = NULL : 0;
        tail->prev = NULL;
    }
    (*res)->s = !id ? "pa" : "pb";
    (*res)->next = (t_type *)malloc(sizeof(t_type));
    *res = (*res)->next;
    (*res)->s = NULL;
    (*res)->next = NULL;
}