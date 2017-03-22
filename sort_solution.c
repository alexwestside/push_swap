
#include "push_swap.h"

void	ft_qsort_stack(t_stack **a, t_stack **b, int len, t_type **res)
{
	int	pivot;
	int	push;
	int	slen;
	int	rot;

	rot = 0;
	slen = len;
	if (((push = 0) || 1) && len <= 3)
		return (ft_sort(a, len, res, 0));
	pivot = ft_pivot(a, len, -1, 0);
	while ((len - 1) >= 0 && ft_check_need(a, pivot, len) && len--)
	{
		if ((*a)->val <= pivot && ++push)
			ft_push(a, b, res, 1);
		else
			ft_rot2(a, res, &rot);
	}
	while (rot-- && ft_check_size(*a) + push != slen)
		ft_rev_rotate(a, res, 0);
	ft_rev_qsort_stack(a, b, push, res);
	while (push--)
		ft_push(b, a, res, 0);
}

void	ft_rot2(t_stack **b, t_type **res, int *rot)
{
	ft_rotate(b, res, 0);
	(*rot)++;
}

void	ft_rot(t_stack **b, t_type **res, int *rot)
{
	ft_rotate(b, res, 1);
	(*rot)++;
}

void	ft_rev_qsort_stack(t_stack **a, t_stack **b, int len, t_type **res)
{
	int	pivot;
	int	push;
	int	slen;
	int	rot;

	rot = 0;
	slen = len;
	if (((push = 0) || 1) && len <= 3)
		return (ft_sort(b, len, res, 1));
	pivot = ft_pivot(b, len, -1, 0);
	while ((len - 1) >= 0 && ft_rev_check_need(b, pivot, len) && len--)
	{
		if ((*b)->val > pivot && ++push)
			ft_push(b, a, res, 0);
		else
			ft_rot(b, res, &rot);
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
