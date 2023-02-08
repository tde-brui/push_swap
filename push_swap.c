/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 11:59:12 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/02/08 18:20:35 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*pass_list(t_list **stack_a, int argc, char **argv)
{
	int		i;
	t_list	*head;

	i = 1;
	while (i < argc)
	{
		list_add_back(stack_a, ft_atoi(argv[i]));
		i++;
	}
	head = (*stack_a);
	while (head->next != NULL)
		head = head->next;
	head->next = (*stack_a);
	return (*stack_a);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (1);
	if (input_val(argc, argv) == 1)
	{
		write(STDERR_FILENO, "Error\n", 6);
		return (1);
	}
	pass_list(&stack_a, argc, argv);
	if (ft_is_sorted(&stack_a) == 0)
		return (1);
	ft_index(&stack_a, argc);
	radix_sort(argc, &stack_a, &stack_b);
	ft_free(&stack_a);
	return (0);
}
