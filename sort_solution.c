
#import "push_swap.h"

void ft_qsort_stack(t_stack **a, t_stack **b, int len)
{
    //t_stack *list;
    int pivot;
    int size;
    int slen;

    size = 0;
    pivot = 0;
    slen = len;

    //if (ft_check_size(*a) <= 3)
    if (len <= 3)
        return (ft_fsort_stack(a));

    pivot = ft_pivot(a, len);

    while ((len - 1))
    {
        if (ft_check_need(a, pivot, len))
        {
            if ((*a)->val <= pivot)
            {
                ft_push(a, b);
                size++;
            } else
                ft_rotate(a);
        }
        else
            break;
        len--;
    }
    ft_qsort_stack(a, b, slen - size);
    ft_qsort_stack(b, a, slen - size);
}

void ft_sort_sotution(t_stack *a, t_stack *b)
{
    int len;

    len = ft_check_size(a);
    ft_qsort_stack(&a, &b, len);



}







































/*
void ft_qsort_stack(t_stack **a, t_stack **b, int size)
{
    int pivot;
    int len;

    len = 0;
    if (ft_check_size(*a) <= 3)
        return (ft_fsort_stack(a));
    pivot = ft_pivot(a);
    while (len != size)
    {
        if ((*a)->val <= pivot)
            ft_push(a, b);
        else if (len != size - 1)
            ft_rotate(a);
        len++;
    }
    ft_qsort_stack(a, b, size - len);
}

void ft_sort_sotution(t_stack *a, t_stack *b)
{
    int size;

    size = ft_check_size(a);
    //ft_printf("%d", size);

    ft_print_stack(a, NULL);

    ft_qsort_stack(&a, &b, size);

    ft_print_stack(a, NULL);
}
 */

