
#ifndef PUSH_SWAP_C_PUSH_SWAP_H
#define PUSH_SWAP_C_PUSH_SWAP_H

#include "ft_printf/ft_printf.h"

#define MIN_INT -2147483648
#define MAX_INT 2147483647

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

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
//void ft_print_stack(t_stack *a, t_stack *b);
void ft_print_stack(t_stack **a, t_stack **b);
int ft_if_is_sorted(t_stack *a);
void ft_check_dublicates(int val, t_stack *a);
//void ft_sort_sotution(t_stack *a, t_stack *b);
void ft_swap(t_stack **a);
void ft_push(t_stack **a, t_stack **b);
void ft_rotate(t_stack **head);
void ft_rev_rotate(t_stack **head);
void ft_sswap(t_stack **a, t_stack **b);
void ft_rrotate(t_stack **a, t_stack **b);
void ft_rrev_rotate(t_stack **a, t_stack **b);
void ft_end(t_stack **end, t_stack *a);
int ft_check_size(t_stack *a);
void ft_sort_sotution(t_stack *a, t_stack *b);
void ft_qsort_stack(t_stack **a, t_stack **b, int len);
int ft_pivot(t_stack **head, int len, int i, int j, int pivot);
void ft_fsort_stack(t_stack **head, int len);
int ft_check_need(t_stack **a, int pivot, int len);
void ft_rev_qsort_stack(t_stack **a, t_stack **b, int len);
void ft_rev_fsort_stack(t_stack **head, int len);
int ft_rev_check_need(t_stack **a, int pivot, int len);
int ft_if_sort(t_stack **a, int len);
int ft_if_rev_sort(t_stack **head, int len);

#endif //PUSH_SWAP_C_PUSH_SWAP_H
