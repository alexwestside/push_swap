
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

typedef struct      s_type
{
    char            *s;
    struct s_type   *next;
    struct s_type	*prev;
}                   t_type;

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
void ft_swap(t_stack **a, t_type **res, int id);
void ft_push(t_stack **a, t_stack **b, t_type **res, int id);
void ft_rotate(t_stack **head, t_type **res, int id);
void ft_rev_rotate(t_stack **head, t_type **res, int id);
void ft_sswap(t_stack **a, t_stack **b, t_type **res, int id);
void ft_rrotate(t_stack **a, t_stack **b, t_type **res, int id);
void ft_rrev_rotate(t_stack **a, t_stack **b, t_type **res, int id);
void ft_end(t_stack **end, t_stack *a);
int ft_check_size(t_stack *a);
void ft_sort_sotution(t_stack *a, t_stack *b, t_type *res);
void ft_qsort_stack(t_stack **a, t_stack **b, int len, t_type **res);
int ft_pivot(t_stack **head, int len, int i, int j, int pivot);
//void ft_fsort_stack(t_stack **head, int len, t_type **res, int id);
int ft_check_need(t_stack **a, int pivot, int len);
void ft_rev_qsort_stack(t_stack **a, t_stack **b, int len, t_type **res);
//void ft_rev_fsort_stack(t_stack **head, int len, t_type **res, int id);
int ft_rev_check_need(t_stack **a, int pivot, int len);
int ft_if_sort(t_stack **a, int len);
int ft_if_rev_sort(t_stack **head, int len);
void ft_print_res(t_type *head);
void ft_optim(t_type *head);


void ft_sort(t_stack **head, int len, t_type **res, int id);

void ft_f_rev_sort(t_stack **head, int len, t_type **res, int id);
void ft_s_rev_sort(t_stack **head, int len, t_type **res, int id);
int ft_check_r_sort_type(t_stack **head);

void ft_sort_in_type_0(t_stack **head, t_type **res, int len);
void ft_sort_in_type_1(t_stack **head, t_type **res, int len);
void ft_sort_in_type_2(t_stack **head, t_type **res, int len);
void ft_sort_in_type_3(t_stack **head, t_type **res, int len);
void ft_sort_in_type_4(t_stack **head, t_type **res, int len);
void ft_sort_in_type_5(t_stack **head, t_type **res, int len);

void ft_f_norm_sort(t_stack **head, int len, t_type **res, int id);
void ft_s_norm_sort(t_stack **head, int len, t_type **res, int id);
int ft_check_n_sort_type(t_stack **head);

int ft_check_end(t_stack **head; int len);


#endif //PUSH_SWAP_C_PUSH_SWAP_H
