/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 16:17:50 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/02/08 18:17:19 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_list **stack_a, int argc)
{
	int		i;
	int		index;
	int		j;
	t_list	*head;
	t_list	*curr;

	j = 0;
	head = (*stack_a);
	curr = (*stack_a);
	while (j < (argc - 1))
	{
		i = 0;
		index = 0;
		while (i < (argc - 1))
		{
			if (head->data > curr->next->data)
				index++;
			i++;
			curr = curr->next;
		}
		head->index = index;
		head = head->next;
		j++;
	}
}
