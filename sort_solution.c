
#import "push_swap.h"


int ft_pivot(t_stack **a)
{
    return (5);
}

void ft_fsort_stack(t_stack **head)
{



}


void ft_qsort_stack(t_stack **a, t_stack **b)
{
    if ()




}

void ft_sort_sotution(t_stack *a, t_stack *b)
{
    t_stack *bigin;
    t_stack *end;

    bigin = a;
    end = ft_end(&end, a);
    ft_print_stack(a, NULL);

    ft_qsort_stack(&a, &b, );

    ft_print_stack(a, NULL);

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

