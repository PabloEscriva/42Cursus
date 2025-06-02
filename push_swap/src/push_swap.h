/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pescriva < pescriva@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:38:53 by pescriva          #+#    #+#             */
/*   Updated: 2025/05/08 16:46:56 by pescriva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

//INIT

t_stack	*init_list(int argc, char *argv[]);
void	set_index(t_stack *head, int lst_size);

//LST_FUNCTIONS

void	insert_tail(t_stack *head[], int new_value);
t_stack	*make_new_node(int new_value);
int		count_nodes(t_stack *head);

//CHECK_INPUT

int		check_doubles(char *argv[]);
int		check_nbr(char *nbr);
void	check_input(int argc, char *argv[]);

//SORT

void	sort_stack(t_stack *stack_a[], t_stack *stack_b[]);

//ROTATE

void	rotate_a(t_stack *head[]);
void	rotate_b(t_stack *head[]);
void	rotate_ab(t_stack *stack_a[], t_stack *stack_b[]);

//R_ROTATE

void	r_rotate_a(t_stack *head[]);
void	r_rotate_b(t_stack *head[]);
void	r_rotate_ab(t_stack *stack_a[], t_stack *stack_b[]);

//SWAP

void	swap_a(t_stack *head[]);
void	swap_b(t_stack *head[]);
void	swap_ab(t_stack *stack_a[], t_stack *stack_b[]);

//PUSH

void	push_a(t_stack *stack_a[], t_stack *stack_b[]);
void	push_b(t_stack *stack_a[], t_stack *stack_b[]);

//UTILS

int		count_args(char *argv[]);
int		sorted(t_stack *head[]);
int		find_biggest(t_stack *head);
int		find_bits(int biggest);

//FREE_ERROR

void	error(void);
void	free_stack(t_stack *head[]);
void	free_arr(char *arr[]);

#endif