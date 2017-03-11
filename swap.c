
#include "push_swap.h"

void ft_f(t_type **res, int id, char *s1, char *s2);

void	ft_swap(t_stack **head, t_type **res, int id)
{
	t_stack	*list;
	t_stack	*tail;

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
	ft_fill_res(res, id, "sa", "sb");

	//ft_f(res, id, "sa", "sb");

}

/*
void ft_f(t_type **res, int id, char *s1, char *s2)
{
	(*res)->s = !id ? s1 : s2;
	(*res)->next = (t_type *)malloc(sizeof(t_type));
	*res = (*res)->next;
	(*res)->s = NULL;
	(*res)->next = NULL;
}
 */

void	ft_sswap(t_stack **a, t_stack **b, t_type **res, int id)
{
	ft_swap(a, res, id);
	ft_swap(b, res, id);
}

void ft_fill_res(t_type **res, int id, char *s1, char *s2)
{
	(*res)->s = !id ? s1 : s2;
	(*res)->next = (t_type *)malloc(sizeof(t_type));
	*res = (*res)->next;
	(*res)->s = NULL;
	(*res)->next = NULL;
}