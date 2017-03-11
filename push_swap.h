
#ifndef PUSH_SWAP_C_PUSH_SWAP_H
# define PUSH_SWAP_C_PUSH_SWAP_H
# define MIN_INT -2147483648
# define MAX_INT 2147483647

# include "ft_printf/ft_printf.h"

typedef struct		s_stack
{
	int				val;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct		s_type
{
	char			*s;
	struct s_type	*next;
}					t_type;

void				ft_error(void);
void				ft_usage(char *av);
t_stack				*ft_check_and_fill(char **av, t_stack *a);
void				ft_val_check(char **av);
long long int		ft_atoi_push_swap(char *s);
void				ft_exit_success(t_stack *a);
void				ft_print_stack(t_stack **a, t_stack **b);
int					ft_if_is_sorted(t_stack *a);
void				ft_check_dublicates(int val, t_stack *a);
void				ft_swap(t_stack **a, t_type **res, int id);
void				ft_push(t_stack **a, t_stack **b, t_type **res, int id);
void				ft_rotate(t_stack **head, t_type **res, int id);
void				ft_rev_rotate(t_stack **head, t_type **res, int id);
void				ft_sswap(t_stack **a, t_stack **b, t_type **res, int id);
void				ft_rrotate(t_stack **a, t_stack **b, t_type **res, int id);
void				ft_rrev_rotate(t_stack **a, t_stack **b, t_type **res, int id);
int					ft_check_size(t_stack *a);
void				ft_sort_sotution(t_stack *a, t_stack *b, t_type *res);
void				ft_qsort_stack(t_stack **a, t_stack **b, int len, t_type **res);
int					ft_pivot(t_stack **head, int len, int i, int j, int pivot);
int					ft_check_need(t_stack **a, int pivot, int len);
void				ft_rev_qsort_stack(t_stack **a, t_stack **b, int len, t_type **res);
int					ft_rev_check_need(t_stack **a, int pivot, int len);
int					ft_if_sort(t_stack **a, int len);
int					ft_if_rev_sort(t_stack **head, int len);
void				ft_print_res(t_type *head);
void				ft_sort(t_stack **head, int len, t_type **res, int id);
void				ft_f_rev_sort(t_stack **head, int len, t_type **res, int id);
void				ft_s_rev_sort(t_stack **head, int len, t_type **res, int id);
int					ft_check_r_sort_type(t_stack **head);
void				ft_sort_in_type_0(void);
void				ft_sort_in_type_1(t_stack **head, t_type **res, int len);
void				ft_sort_in_type_2(t_stack **head, t_type **res, int len);
void				ft_sort_in_type_3(t_stack **head, t_type **res, int len);
void				ft_sort_in_type_4(t_stack **head, t_type **res, int len);
void				ft_sort_in_type_5(t_stack **head, t_type **res, int len);
void				ft_f_norm_sort(t_stack **head, int len, t_type **res, int id);
void				ft_s_norm_sort(t_stack **head, int len, t_type **res, int id);
int					ft_check_n_sort_type(t_stack **head);
void				ft_optim(t_type **head);
int					ft_optim_del(t_type *list);
int					ft_optim_change(t_type *list);
void				ft_optim_change_type(t_type **list, int *i);
int					ft_optim_2(t_type **head, int i);
int					ft_check_size_2(t_type *head);

#endif
