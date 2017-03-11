
#include "push_swap.h"

void	ft_sort(t_stack **head, int len, t_type **res, int id)
{
	if (!id)
	{
		if (ft_if_sort(head, len))
			ft_f_norm_sort(head, len, res, id);
		return;
	}
	else
	{
		if (ft_if_rev_sort(head, len))
			ft_f_rev_sort(head, len, res, id);
		return;
	}
}

int		ft_if_sort(t_stack **head, int len)
{
	t_stack	*list;
	int		val;

	list = *head;
	val = list->val;
	while (len)
	{
		if (val > list->val)
			return (1);
		val = list->val;
		list = list->next;
		len--;
	}
	return (0);
}

int		ft_if_rev_sort(t_stack **head, int len)
{
	t_stack	*list;
	int		val;

	list = *head;
	val = list->val;
	while (len)
	{
		if (val < list->val)
			return (1);
		val = list->val;
		list = list->next;
		len--;
	}
	return (0);
}
