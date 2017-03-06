
#include "push_swap.h"

void ft_qsort_stack(t_stack **a, t_stack **b, int len)
{
    int pivot;
    int push;
    int slen;
    int rot;

    push = 0;
    pivot = 0;
    rot = 0;
    slen = len;

    if (len <= 3)
        return (ft_fsort_stack(a, len));

    pivot = ft_pivot(a, len, -1, -1, 0);

    while ((len - 1) >= 0)
    {
        if (ft_check_need(a, pivot, len))
        {
            if ((*a)->val <= pivot)
            {
                ft_push(a, b);
                push++;
            }
            else
            {
                ft_rotate(a);
                rot++;
            }
        }
        else
            break;
        len--;
    }
    while(rot-- && (*a)->next)
        ft_rev_rotate(a);
    ft_qsort_stack(a, b, slen - push);
    ft_rev_qsort_stack(a, b, push);
    while(push--)
        ft_push(b, a);
}

void ft_rev_qsort_stack(t_stack **a, t_stack **b, int len)
{
    int pivot;
    int push;
    int slen;
    int rot;

    push = 0;
    pivot = 0;
    rot = 0;
    slen = len;

    if (len <= 3)
       return (ft_rev_fsort_stack(b, len));

    pivot = ft_pivot(b, len, -1, -1, 0);

    while ((len - 1) >= 0)
    {
        if (ft_rev_check_need(b, pivot, len))
        {
            if ((*a)->val >= pivot)
            {
                ft_push(b, a);
                push++;
            }
            else
            {
                ft_rotate(b);
                rot++;
            }
        }
        else
            break;
        len--;
    }
    while(rot-- && (*b)->next)
        ft_rev_rotate(b);
    ft_rev_qsort_stack(a, b, slen - push);
    ft_qsort_stack(a, b, slen - push);
    while(push--)
        ft_push(a, b);
}

void ft_sort_sotution(t_stack *a, t_stack *b)
{
    int len;
    ft_print_stack(&a, &b);

    len = ft_check_size(a);
    ft_qsort_stack(&a, &b, len);

    ft_print_stack(&a, &b);
}



/*
 * 8 11 9 14 3 7 1 2
 *
t_lst    *quicksort_stack(t_lst **stack_a, t_lst **stack_b, int sort_len)
{
    int pushed;
    int rotated;
    int pivot;

    pushed = 0;
    rotated = 0;
    pivot = get_n_pivot1(*stack_a, sort_len);
    short_sort(stack_a, stack_b, sort_len);
    if (lst_is_nsorted(*stack_a, sort_len))
        return (stack_operation("finish", stack_a, stack_b));
    while (lst_is_num_smaller_in_n(*stack_a, pivot, sort_len - pushed \
    - rotated))
    {
        if ((*stack_a)->val >= pivot && ++rotated)
            stack_operation("RA", stack_a, stack_b);
        else if (++pushed)
            stack_operation("PB", stack_a, stack_b);
    }
    while (rotated-- && !(lst_size(*stack_a) + pushed == sort_len))
        stack_operation("RRA", stack_a, stack_b);
    quicksort_stack(stack_a, stack_b, sort_len - pushed);
    rev_quicksort_stack(stack_a, stack_b, pushed);
    while (pushed--)
        stack_operation("PA", stack_a, stack_b);
    return (stack_operation("finish", stack_a, stack_b));
}
*/

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

