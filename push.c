
#include "push_swap.h"

void ft_push(t_stack **a, t_stack **b)
{
	t_stack *list;
	t_stack *tail;

	//list = *b;
	//tail = *b;
	//list = *a;
	if (!*b)
	{
		list = *a;
		*b = *a;
		list = list->next;
		*a = list;
		list->prev = NULL;
		(*b)->next = NULL;
		(*b)->prev = NULL;
		/*
		*b = (t_stack *) malloc(sizeof(t_stack));
		list = *b;
		list->val = (*a)->val;
		list->next = NULL;
		list->prev = NULL;
		 */
	}
	else
	{
		list = *a;
		tail = *b;
		tail->prev = *a;
		tail = tail->prev;
		tail->next = *b;
		*b = tail;
		list = list->next;
		*a = list;
		list->prev = NULL;
		tail->prev = NULL;

		/*
		list->prev = (t_stack *) malloc(sizeof(t_stack));
		list = list->prev;
		list->next = tail;
		list->val = (*a)->val;
		list->prev = NULL;
		*b = list;
		*/
	}
	/*list = *a;
	*a = list->next;
	(*a)->prev = NULL;
	list->next = NULL;
	free(list);
	 */
}
