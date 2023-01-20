/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils2.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 13:03:22 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/20 17:57:00 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minuscounter;
	int	result;

	i = 0;
	minuscounter = 0;
	result = 0;
	while ((str[i] < 14 && str[i] > 8) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			minuscounter++;
		i++;
	}
	while (str[i] < 58 && str[i] > 47)
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	if (minuscounter % 2 == 1)
		result *= -1;
	return (result);
}

int	input_val(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i][j])
	{
		if (argv[i][0] == ' ')
			i++;
	}
	return (1);
}

int	ft_is_sorted(t_list **stack_a)
{
	t_list	*head;

	head = (*stack_a);
	while (head->next != NULL)
	{
		if (head->data > head->next->data)
			return (1);
		head = head->next;
	}
	return (0);
}
