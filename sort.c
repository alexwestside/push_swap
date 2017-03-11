
#include "push_swap.h"

void	ft_sort(t_stack **head, int len, t_type **res, int id)
{
	if (!id)
	{
		if (ft_if_sort(head, len))
			ft_f_norm_sort(head, len, res, id);
		return ;
	}
	else
	{
		if (ft_if_rev_sort(head, len))
			ft_f_rev_sort(head, len, res, id);
		return ;
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

int		ft_if_is_sorted(t_stack *a)
{
	t_stack	*list;
	int		val;

	list = a;
	val = list->val;
	while (list)
	{
		if (val > list->val)
			return (1);
		val = list->val;
		list = list->next;
	}
	return (0);
}

void	ft_check_dublicates(int val, t_stack *a)
{
	t_stack		*list;

	list = a;
	while (list)
	{
		if (val == list->val)
			ft_error();
		list = list->next;
	}
}
