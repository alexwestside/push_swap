
#include "push_swap.h"

void	ft_qsort_stack(t_stack **a, t_stack **b, int len, t_type **res)
{
	int	pivot;
	int	push;
	int	slen;
	int	rot;

	push = 0;
	rot = 0;
	slen = len;
	if (len <= 3)
		return (ft_sort(a, len, res, 0));

	pivot = ft_pivot(a, len, -1, -1, 0);

	while ((len - 1) >= 0)
	{
		if (ft_check_need(a, pivot, len))
			if ((*a)->val <= pivot)
			{
				ft_push(a, b, res, 1);
				push++;
			}
			else
			{
				ft_rotate(a, res, 0);
				rot++;
			}
		else
			break;
		len--;
	}
	while (rot-- && ft_check_size(*a) + push != slen)
		ft_rev_rotate(a, res, 0);
	ft_qsort_stack(a, b, slen - push, res);
	ft_rev_qsort_stack(a, b, push, res);
	while (push--)
		ft_push(b, a, res, 0);
}

void	ft_rev_qsort_stack(t_stack **a, t_stack **b, int len, t_type **res)
{
	int	pivot;
	int	push;
	int	slen;
	int	rot;

	push = 0;
	rot = 0;
	slen = len;
	if (len <= 3)
		return (ft_sort(b, len, res, 1));

	pivot = ft_pivot(b, len, -1, -1, 0);

	while ((len - 1) >= 0)
	{
		if (ft_rev_check_need(b, pivot, len))
			if ((*b)->val > pivot)
			{
				ft_push(b, a, res, 0);
				push++;
			}
			else
			{
				ft_rotate(b, res, 1);
				rot++;
			}
		else
			break;
		len--;
	}
	ft_qsort_stack(a, b, push, res);
	while (rot-- && ft_check_size(*b) + push != slen)
		ft_rev_rotate(b, res, 1);
	ft_rev_qsort_stack(a, b, slen - push, res);
	while (push--)
		ft_push(a, b, res, 1);
}

void	ft_sort_sotution(t_stack *a, t_stack *b, t_type *res)
{
	int	len;

	len = ft_check_size(a);
	ft_qsort_stack(&a, &b, len, &res);
}
