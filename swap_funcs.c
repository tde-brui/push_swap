/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_funcs.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 12:33:10 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/20 20:02:29 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack)
{
	int	temp;
	int	indextemp;

	temp = (*stack)->data;
	indextemp = (*stack)->index;
	(*stack)->data = (*stack)->next->data;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->data = temp;
	(*stack)->next->index = indextemp;
	write(1, "sa\n", 3);
}

void	ra(t_list **stack)
{
	t_list	*head;
	t_list	*last;

	head = (*stack);
	last = (*stack);
	while (last->next != NULL)
		last = last->next;
	(*stack) = head->next;
	head->next = NULL;
	last->next = head;
	write(1, "ra\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = (*stack_a);
	head_b = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	(*stack_a) = head_b;
	(*stack_a)->next = head_a;
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = (*stack_a);
	head_b = (*stack_b);
	(*stack_a) = (*stack_a)->next;
	(*stack_b) = head_a;
	(*stack_b)->next = head_b;
	write(1, "pb\n", 3);
}

void	rra(t_list **stack_a)
{
	t_list	*s2last;
	t_list	*last;
	t_list	*head;

	s2last = NULL;
	last = (*stack_a);
	head = (*stack_a);
	while (last->next != NULL)
	{
		s2last = last;
		last = last->next;
	}
	(*stack_a) = last;
	(*stack_a)->next = head;
	s2last->next = NULL;
	write(1, "rra\n", 4);
}
