/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 11:59:12 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/20 18:44:57 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_list	*pass_list(t_list **stack_a, int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		list_add_back(stack_a, ft_atoi(argv[i]));
		i++;
	}
	return (*stack_a);
}

//returns 1 if fail right now

int	push_swap(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	// if (input_val(argv) == 1)
	// 	return (0);
	pass_list(&stack_a, argc, argv);
	if (ft_is_sorted(&stack_a) == 0)
		return (1);
	ft_index(&stack_a, argc, argv);
	radix_sort(argc, &stack_a, &stack_b);
	print_list(&stack_a);
	return (0);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
}
