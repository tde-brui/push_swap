/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   index.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 16:17:50 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/21 18:46:16 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	rotate(t_list **stack)
// {
// 	t_list	*last;
// 	t_list	*head;

// 	last = (*stack);
// 	head = (*stack);
// 	// if (head == NULL || head->next == NULL)
// 	// 	return (NULL);
// 	while (last->next != NULL)
// 		last = last->next;
// 	(*stack) = head->next;
// 	head->next = NULL;
// 	last->next = head;
// }

void	ft_index(t_list **stack_a, int argc, char **argv)
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
