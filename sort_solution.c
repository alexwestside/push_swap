
#import "push_swap.h"

void ft_end(t_stack **end, t_stack *head)
{
    t_stack *list;

    list = head;
    while(list->next)
        list = list->next;
    *end = list;
}

void ft_swap_list(t_stack **i, t_stack **j)
{
    t_stack *tail;
    t_stack *next;

    if (*i != *j)
    {
        next = (*j)->next;
        tail = (*i)->prev;
        (*i)->next = next;
        (*j)->prev = tail;
        (*i)->prev = *j;
        (*j)->next = *i;
        tail->next = *j;
        //ft_swap(i);
        *i = *j;
        *j = (*j)->next;
    }
}

t_stack *ft_partition_stack(t_stack **a, t_stack **start, t_stack **end)
{
    t_stack *i;
    t_stack *j;
    t_stack *pivot;

    //j = *start;
    //i = j != *end ? *start : (*start)->prev;
    i = (*start)->prev;
    j = *start;
    pivot = *end;

    while (j != *end)
    {
        if (j->val <= pivot->val && j)
        {
            if (!i)
                i = *start;
            else
                i = i->next;
            ft_swap_list(&i, &j);
        }
        j = j->next;
    }
    if (!i)
        ft_swap_list(start, end);
    else
        ft_swap_list(&(i->next), end);
    return (i->next);

}
void ft_qsort_stack(t_stack **a, t_stack **b, t_stack *start, t_stack *end)
{
    t_stack *p;

    if (start != end)
    {
        p = ft_partition_stack(a, &start, &end);
        ft_qsort_stack(a, b, start, p->prev);
        ft_qsort_stack(a, b, p->next, end);
    }
}

void ft_sort_sotution(t_stack *a, t_stack *b)
{
    t_stack *start;
    t_stack *end;

    start = a;
    ft_end(&end, a);

	ft_print_stack(a, b);

    ft_qsort_stack(&a, &b, start, end);

    ft_print_stack(a, b);
}

