/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap_funcs.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 12:33:10 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/02/08 17:59:27 by tde-brui      ########   odam.nl         */
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

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	t_list	*head_b;
	t_list	*last_a;
	t_list	*prev;

	head_a = (*stack_a);
	head_b = (*stack_b);
	last_a = (*stack_a);
	prev = (*stack_a);
	while (last_a != NULL)
	{
		last_a = last_a->next;
		if (last_a == (*stack_a))
			break ;
		prev = last_a;
	}
	(*stack_b) = (*stack_b)->next;
	(*stack_a) = head_b;
	(*stack_a)->next = head_a;
	prev->next = (*stack_a);
	write(1, "pa\n", 3);
}

void	ra(t_list **stack)
{
	(*stack) = (*stack)->next;
	write(1, "ra\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_b;
	t_list	*last_a;
	t_list	*head_a;
	t_list	*prev;

	head_b = (*stack_b);
	last_a = (*stack_a);
	head_a = (*stack_a);
	prev = NULL;
	while (last_a != NULL)
	{
		last_a = last_a->next;
		if (last_a == (*stack_a))
			break ;
		prev = last_a;
	}
	(*stack_a) = (*stack_a)->next;
	prev->next = (*stack_a);
	(*stack_b) = head_a;
	(*stack_b)->next = head_b;
	write(1, "pb\n", 3);
}

void	rra(t_list **stack_a)
{
	t_list	*head;
	t_list	*prev;
	t_list	*curr;

	head = (*stack_a);
	prev = NULL;
	curr = (*stack_a);
	while (head != NULL)
	{
		curr = curr->next;
		if (curr == head)
			break ;
		prev = curr;
	}
	(*stack_a) = prev;
	write(1, "rra\n", 4);
}
