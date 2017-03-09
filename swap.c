
#include "push_swap.h"

void ft_swap(t_stack **head, t_type **res, int id)
{
	t_stack *list;
	t_stack *tail;
    //t_type *lst;

	if (*head)
	{
		if ((*head)->next)
		{
			list = *head;
			tail = *head;
			tail = list->next;
			list = tail->next ? tail->next : tail;
			(*head)->prev = tail;
			tail->prev = NULL;
			(*head)->next = tail->next ? list : NULL;
			tail->next = *head;
			list->prev = *head;
			*head = tail;
		}
	}
    //t_type *p;
    //p = *res;

    (*res)->s = !id ? "sa" : "sb";
    (*res)->next = (t_type *)malloc(sizeof(t_type));
    *res = (*res)->next;
    //(*res)->prev = p;
    (*res)->s = NULL;
    (*res)->next = NULL;
    //ft_printf("%s", !id ? "sa" : "sb");
}

void ft_sswap(t_stack **a, t_stack **b, t_type **res, int id)
{
	ft_swap(a, res, id);
	ft_swap(b, res, id);
}

