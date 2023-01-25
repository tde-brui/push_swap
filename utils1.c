/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils1.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 12:25:45 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/25 20:41:49 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (!new_node)
		return (NULL);
	new_node->data = value;
	new_node->next = NULL;
	return (new_node);
}

void	list_add_back(int argc, t_list **stack_a, int value)
{
	t_list	*head;

	head = (*stack_a);
	if ((*stack_a) == NULL)
		(*stack_a) = list_new(value);
	else
	{
		while (head->next != NULL)
			head = head->next;
		head->next = list_new(value);
	}
}

void	ft_free(t_list **stack_a)
{
	t_list	*head;
	t_list	*curr;

	head = (*stack_a);
	curr = (*stack_a);
	while (head != NULL)
	{
		curr = curr->next;
		free(curr);
		if (curr == head)
			break ;
	}
}

// void	print_list(t_list **stack_a)
// {
// 	// DONT FORGET TO REMOVE/COMMENT OUT PRINT LIST!!!
// 	// IT USES PRINTF!!!
// 	t_list	*head;
// 	t_list	*curr;

// 	head = (*stack_a);
// 	curr = (*stack_a);
// 	while (head != NULL)
// 	{
// 		printf("%d//", head->data);
// 		printf("%d\n", head->index);
// 		head = head->next;
// 		if (head == curr)
// 			break ;
// 	}
// }
