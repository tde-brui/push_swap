/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 12:10:32 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/20 18:32:55 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node{
	int				index;
	int				data;
	struct s_node	*next;
}t_list;

int		list_len(t_list **stack);
t_list	*list_add(t_list **stack_a, int value);
void	list_add_back(t_list **stack_a, int value);
void	print_list(t_list **stack_a);
int		ft_atoi(const char *str);
int		input_val(char **argv);
int		ft_is_sorted(t_list **stack_a);
void	ft_index(t_list **stack_a, int argc, char **argv);
void	rotate(t_list **stack);
void	radix_sort(int argc, t_list **stack_a, t_list **stack_b);
void	small_sort(int argc, t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_3(t_list **stack_a);
void	ra(t_list **stack);
void	pa(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack);
void	rra(t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	sb(t_list **stack);

#endif