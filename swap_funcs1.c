/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_funcs1.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 12:33:10 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/19 14:52:29 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

void	sa(t_list **stack)
{
	int	temp;

	temp = (*stack)->data;
	if ((*stack) == NULL || (*stack)->next == NULL)
		return (NULL);
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp;
	write(1, "sa\n", 3);
}

void	ra(t_list **stack)
{
	t_list	*head;
	t_list	*last;

	head = (*stack);
	last = (*stack);
	if ((*stack) == NULL || (*stack)->next == NULL)
		return (NULL);
	while (last->next != NULL)
		last = last->next;
	(*stack) = (*stack)->next;
	last->next = head;
	head->next = NULL;
	write(1, "ra\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = (*stack_a);
	head_b = (*stack_b);
	if (!(*stack_b))
		return (NULL);
	(*stack_a) = head_b;
	(*stack_a)->next = head_a;
	(*stack_b) = (*stack_b)->next;
	write(1, "pa\n", 3);
}
