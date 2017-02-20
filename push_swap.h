/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orizhiy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:55:28 by orizhiy           #+#    #+#             */
/*   Updated: 2017/02/15 12:55:29 by orizhiy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_C_PUSH_SWAP_H
#define PUSH_SWAP_C_PUSH_SWAP_H

#include "ft_printf/ft_printf.h"

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
	struct s_stack	*start;
	struct s_stack	*end;
	struct s_stack 	*next;
	struct s_stack	*prev;
}					t_stack;


void ft_usage(char *av);

#endif //PUSH_SWAP_C_PUSH_SWAP_H
