/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 12:10:32 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/19 17:04:33 by tde-brui      ########   odam.nl         */
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
void	ft_index(t_list **stack_a, int argc, char **argv);
void	rotate(t_list **stack);

#endif