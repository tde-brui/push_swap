/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 14:41:30 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/20 17:04:25 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	radix_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc < 7)
		small_sort(argc, stack_a, stack_b);
	// else
	// 	big_sort(stack_a, stack_b);
}
