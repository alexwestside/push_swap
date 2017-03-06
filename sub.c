
#include "push_swap.h"

int ft_check_size(t_stack *head)
{
    t_stack *list;
    int size;

    list = head;
    size = 0;
    if (!list->next)
        return (1);
    while (list)
    {
        list = list->next;
        size++;
    }
    return (size);
}

int ft_pivot(t_stack **head, int len, int i, int j, int pivot)
{
    t_stack *list;
    t_stack *p;
    int n1;
    int n2;

    while (++i < len)
    {
        list = *head;
        p = *head;
        j = -1;
        n1 = 0;
        n2 = 0;
        pivot = p->val;
        while (++j < len)
        {
            if (pivot < list->val)
                n1++;
            else if (pivot > list->val)
                n2++;
            if (n1 > len / 2 || n2 > len / 2)
            {
                p = p->next;
                pivot = p->val;
            }
            list = list->next;
        }
    }
    return (pivot);
}

    /*
     * 8 11 9 14 3 7 1 2
     *
    int pivot;
    int max;
    int min;
    t_stack *list;

    list = *head;
    max = list->val;
    min = list->val;
    while (len--)
    {
        if (list->val < min)
            min = list->val;
        else if (list->val > max)
            max = list->val;
        list = list->next;
    }
    pivot = (min + max) / 2;
    return (pivot);
     */

void ft_fsort_stack(t_stack **head, int len)
{
    t_stack *list;
    t_stack *tail;

    if (len == 1)
        return ;
    else if (len == 2)
    {
        list = *head;
        tail = list->next;
        if (list->val > tail->val)
            ft_swap(head);
    }
    else
    {
        while (len)
        {
            list = *head;
            tail = list->next;
            if (list->val > tail->val)
                ft_swap(head);
            if (!ft_if_sort(head, len))
                break;
            else
            //else if (len - 1)
                ft_rev_rotate(head);
            len--;
        }
    }
}

void ft_rev_fsort_stack(t_stack **head, int len)
{
    t_stack *list;
    t_stack *tail;

    //while (ft_if_is_sorted(*head))
    if (len == 1)
        return ;
    else if (len == 2)
    {
        list = *head;
        tail = list->next;
        if (list->val < tail->val)
            ft_swap(head);
    }
    while(len)
    {
        list = *head;
        tail = list->next;
        if (list->val < tail->val)
            ft_swap(head);
        if (!ft_if_rev_sort(head, len))
            break;
        //else if (len - 1)
        else
            ft_rev_rotate(head);
        len--;
    }
}

int ft_check_need(t_stack **a, int pivot, int len)
{
    t_stack *list;

    list = *a;
    while(len)
    {
        if (list->val <= pivot)
            return (1);
        list = list->next;
        len--;
    }
    return (0);
}

int ft_rev_check_need(t_stack **a, int pivot, int len)
{
    t_stack *list;

    list = *a;
    while(len)
    {
        if (list->val >= pivot)
            return (1);
        list = list->next;
        len--;
    }
    return (0);
}

int ft_if_sort(t_stack **head, int len)
{
    t_stack *list;
    int val;

    list = *head;
    val = list->val;
    while(len)
    {
        if (val > list->val)
            return (1);
        val = list->val;
        list = list->next;
        len--;
    }
    return (0);
}

int ft_if_rev_sort(t_stack **head, int len)
{
    t_stack *list;
    int val;

    list = *head;
    val = list->val;
    while(len)
    {
        if (val < list->val)
            return (1);
        val = list->val;
        list = list->next;
        len--;
    }
    return (0);
}
