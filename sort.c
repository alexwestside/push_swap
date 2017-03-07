
#include "push_swap.h"

void ft_fsort_stack(t_stack **head, int len, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;
    int slen;
    int rot;

    slen = len;
    rot = 0;
    if (len == 1)
        return ;
    else if (len == 2)
    {
        list = *head;
        tail = list->next;
        if (list->val > tail->val)
            ft_swap(head, res, id);
    }
    else
    {
        if (ft_if_sort(head, len))
        {
            while (len)
            {
                list = *head;
                tail = list->next;
                if (list->val > tail->val)
                    ft_swap(head, res, id);
                else if (ft_if_sort(head, slen))
                {
                    ft_rotate(head, res, id);
                    rot++;
                }
                len--;
            }
            while (rot--)
                ft_rev_rotate(head, res, id);
            list = *head;
            tail = list->next;
            if (list->val > tail->val)
                ft_swap(head, res, id);
        }
        /*while (len)
        {
            list = *head;
            tail = list->next;
            if (list->val > tail->val)
                ft_swap(head);
            if (!ft_if_sort(head, len))
                break;
            else
                ft_rotate(head);
            len--;
        }
        ft_rev_rotate(head);
        if ((*head)->val > tail->val)
            ft_swap(head);
            */
        /*
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
            */
    }
}

void ft_rev_fsort_stack(t_stack **head, int len, t_type **res, int id)
{
    t_stack *list;
    t_stack *tail;
    int slen;
    int rot;

    rot = 0;
    slen = len;
    //while (ft_if_is_sorted(*head))
    if (len == 1)
        return ;
    else if (len == 2)
    {
        list = *head;
        tail = list->next;
        if (list->val < tail->val)
            ft_swap(head, res, id);
    }
    else
    {
        if (ft_if_rev_sort(head, len))
        {
            while (len)
            {
                list = *head;
                tail = list->next;
                if (list->val < tail->val)
                    ft_swap(head, res, id);
                else if (ft_if_rev_sort(head, slen))
                {
                    ft_rotate(head, res, id);
                    rot++;
                }
                len--;
            }
            while (rot--)
                ft_rev_rotate(head, res, id);
            list = *head;
            tail = list->next;
            if (list->val < tail->val)
                ft_swap(head, res, id);
        }
    }
    /*
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
     */
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

