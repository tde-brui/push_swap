/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 14:41:30 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/21 18:39:48 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc < 7)
		small_sort(argc, stack_a, stack_b);
	else
		big_sort(argc, stack_a, stack_b);
}

int	get_max(t_list **stack_a)
{
	int		max;
	t_list	*head;

	head = (*stack_a);
	max = head->index;
	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		if (max < head->next->index)
			max = head->next->index;
		head = head->next;
	}
	return (max);
}

int	get_max_bits(int max)
{
	int	max_bits;

	max_bits = 0;
	while (max != 0)
	{
		max = max >> 1;
		max_bits++;
	}
	return (max_bits);
}

void	big_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	int		max_index;
	int		max_bits;
	int		i;
	int		j;
	int		value;

	max_index = argc - 2;
	max_bits = get_max_bits(max_index);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < (argc - 1))
		{
			value = (*stack_a)->index;
			if (((value >> i) & 1) == 1)
				ra(argc, stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while ((*stack_b) != NULL)
			pa(stack_a, stack_b);
		i++;
	}
}
