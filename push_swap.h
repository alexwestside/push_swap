//
// Created by Olexandr Rizhiy on 2/21/17.
//

#ifndef PUSH_SWAP_C_PUSH_SWAP_H
#define PUSH_SWAP_C_PUSH_SWAP_H

#include "ft_printf/ft_printf.h"

#define MIN_INT -2147483648
#define MAX_INT 2147483647

typedef struct 	s_flags
{
	int status_oper_mode 	: 1;	// -v
	int color_mode 			: 1;	// -c
	int number_oper_mode 	: 1;	// -o
	int starr_end_mode 		: 1;	// -i
	int enable_all_flags 	: 1;	// -a
	int disable_all_flags 	: 1;	// -s
	uintmax_t count_op		: 1;	// count operation

}				t_flags;

typedef struct 		s_stack
{
	int 			val;
	//struct s_stack	*start;
	//struct s_stack	*end;
	struct s_stack 	*next;
	struct s_stack	*prev;
}					t_stack;

void ft_error(void);
void ft_usage(char *av);
t_stack *ft_check_and_fill(char **av, t_stack *a);
void ft_val_check(char **av);
long long int ft_atoi_push_swap(char *s);
void ft_exit_success(t_stack *a);
void ft_print_stack(t_stack *a, t_stack *b);
//void ft_print_stack(t_stack *a);
int ft_if_is_sorted(t_stack *a);
void ft_check_dublicates(int val, t_stack *a);
void ft_sort_sotution(t_stack *a, t_stack *b);
void ft_swap(t_stack **a);
void ft_push(t_stack **a, t_stack **b);
void ft_rotate(t_stack **head);
void ft_rev_rotate(t_stack **head);
void ft_sswap(t_stack **a, t_stack **b);
void ft_rrotate(t_stack **a, t_stack **b);
void ft_rrev_rotate(t_stack **a, t_stack **b);
int ft_pivot(t_stack *head);
//void ft_qsort_stack(t_stack **a, t_stack **b);
void ft_qsort_stack(t_stack **a, t_stack **b, t_stack *start, t_stack *end);
void ft_end(t_stack **end, t_stack *a);
t_stack *ft_partition_stack(t_stack **a, t_stack **start, t_stack **end);
void ft_swap_list(t_stack **i, t_stack **j);

#endif //PUSH_SWAP_C_PUSH_SWAP_H
