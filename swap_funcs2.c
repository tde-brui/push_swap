/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_funcs2.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 18:25:42 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/20 19:02:42 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **stack)
{
	int	temp;
	int	indextemp;

	temp = (*stack)->data;
	indextemp = (*stack)->index;
	(*stack)->data = (*stack)->next->data;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->data = temp;
	(*stack)->next->index = indextemp;
	write(1, "sb\n", 3);
}
