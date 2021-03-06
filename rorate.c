
#include "push_swap.h"

void	ft_rotate(t_stack **head, t_type **res, int id)
{
	t_stack	*list;
	t_stack	*tail;

	if (*head && (*head)->next)
	{
		list = *head;
		while (list->next)
			list = list->next;
		tail = (*head)->next;
		list->next = (*head);
		(*head)->prev = list;
		tail->prev = NULL;
		(*head)->next = NULL;
		(*head) = tail;
	}
	if ((*head)->next)
		ft_fill_res(res, id, "ra", "rb");
}

void	ft_rrotate(t_stack **a, t_stack **b, t_type **res, int id)
{
	ft_rotate(a, res, id);
	ft_rotate(b, res, id);
	(*res)->s = "rr";
	(*res)->next = (t_type *)malloc(sizeof(t_type));
	*res = (*res)->next;
	(*res)->s = NULL;
	(*res)->next = NULL;
}
