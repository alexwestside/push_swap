
#include "push_swap.h"

void	ft_optim(t_type **head)
{
	while (1)
	{
		if (!ft_optim_2(head, 0))
			break ;
	}
}

int		ft_optim_2(t_type **head, int i)
{
	t_type	*list;
	t_type	*tail;

	tail = *head;
	list = tail->next;
	while (list)
	{
		if (list->s && list->next->s && ft_optim_del(list))
		{
			tail->next = list->next->next;
			list = tail->next;
			i++;
		}
		else if (list->s && list->next->s && ft_optim_change(list))
			ft_optim_change_type(&list, &i);
		else
		{
			tail = list;
			list = list->next;
		}
	}
	return (i);
}

void	ft_optim_change_type(t_type **list, int *i)
{
	if (!ft_strcmp((*list)->s, "sa") || !ft_strcmp((*list)->s, "sb"))
	{
		(*list)->next = (*list)->next->next;
		(*list)->s = "ss";
	}
	else if (!ft_strcmp((*list)->s, "ra") || !ft_strcmp((*list)->s, "rb"))
	{
		(*list)->next = (*list)->next->next;
		(*list)->s = "rr";
	}
	else if (!ft_strcmp((*list)->s, "rra") || !ft_strcmp((*list)->s, "rrb"))
	{
		(*list)->next = (*list)->next->next;
		(*list)->s = "rrr";
	}
	(*i)++;
}

int		ft_optim_del(t_type *list)
{
	if (!ft_strcmp(list->s, "pa") && !ft_strcmp(list->next->s, "pb"))
		return (1);
	if (!ft_strcmp(list->s, "pb") && !ft_strcmp(list->next->s, "pa"))
		return (1);
	if (!ft_strcmp(list->s, "ra") && !ft_strcmp(list->next->s, "rra"))
		return (1);
	if (!ft_strcmp(list->s, "rra") && !ft_strcmp(list->next->s, "ra"))
		return (1);
	if (!ft_strcmp(list->s, "rb") && !ft_strcmp(list->next->s, "rrb"))
		return (1);
	if (!ft_strcmp(list->s, "rrb") && !ft_strcmp(list->next->s, "rb"))
		return (1);
	return (0);
}

int		ft_optim_change(t_type *list)
{
	if (!ft_strcmp(list->s, "sa") && !ft_strcmp(list->next->s, "sb"))
		return (1);
	if (!ft_strcmp(list->s, "sb") && !ft_strcmp(list->next->s, "sa"))
		return (1);
	if (!ft_strcmp(list->s, "ra") && !ft_strcmp(list->next->s, "rb"))
		return (1);
	if (!ft_strcmp(list->s, "rb") && !ft_strcmp(list->next->s, "ra"))
		return (1);
	if (!ft_strcmp(list->s, "rra") && !ft_strcmp(list->next->s, "rrb"))
		return (1);
	if (!ft_strcmp(list->s, "rrb") && !ft_strcmp(list->next->s, "rra"))
		return (1);
	return (0);
}
