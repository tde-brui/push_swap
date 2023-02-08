/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 14:34:27 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/02/08 18:03:40 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **stack_a)
{
	int	one;
	int	two;
	int	three;

	if (ft_is_sorted(stack_a) == 1)
	{
		one = (*stack_a)->data;
		two = (*stack_a)->next->data;
		three = (*stack_a)->next->next->data;
		if (one > two && (*stack_a)->data > three)
		{
			ra(stack_a);
			if (two > three)
				sa(stack_a);
		}
		else if (two > one && two > three)
		{
			rra(stack_a);
			if (one < three)
				sa(stack_a);
		}
		else if (three > one && three > two)
			sa(stack_a);
	}
}

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->index != 0)
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	j;

	j = 0;
	while (j < 2)
	{
		while ((*stack_a)->index != 0 && (*stack_a)->index != 1)
			ra(stack_a);
		pb(stack_a, stack_b);
		j++;
	}
	sort_3(stack_a);
	if ((*stack_b)->data < (*stack_b)->next->data)
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	small_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc == 3)
		sa(stack_a);
	if (argc == 4)
		sort_3(stack_a);
	if (argc == 5)
		sort_4(stack_a, stack_b);
	if (argc == 6)
		sort_5(stack_a, stack_b);
}
