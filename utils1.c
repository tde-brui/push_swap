/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils1.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 12:25:45 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/20 19:04:26 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	list_len(t_list **stack)
{
	t_list	*head;
	int		i;

	head = (*stack);
	i = 0;
	while (head->next != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}

t_list	*list_new(int value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	new_node->data = value;
	new_node->next = NULL;
	return (new_node);
}

void	list_add_back(t_list **stack_a, int value)
{
	int		i;
	t_list	*head;

	i = 1;
	head = (*stack_a);
	if ((*stack_a) == NULL)
		(*stack_a) = list_new(value);
	else
	{
		while (head->next != NULL)
		{
			head = head->next;
			i++;
		}
		head->next = list_new(value);
	}
}

void	print_list(t_list **stack_a)
{
	// DONT FORGET TO REMOVE/COMMENT OUT PRINT LIST!!!
	// IT USES PRINTF!!!
	t_list	*head;

	head = (*stack_a);
	while (head->next != NULL)
	{
		printf("%d//", head->data);
		printf("%d\n", head->index);
		head = head->next;
	}
	printf("%d//", head->data);
	printf("%d\n", head->index);
}
