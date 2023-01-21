/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils2.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 13:03:22 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/21 18:37:04 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	ft_isdigit(int a)
{
	if (a > 47 && a < 58)
		return (1);
	else
		return (0);
}

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
	int	input;

	i = 1;
	while (argv[i])
	{
		input = ft_atoi(argv[i]);
		if (input > INT_MAX || input < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_sorted(int argc, t_list **stack_a)
{
	t_list	*head;
	t_list	*curr;

	head = (*stack_a);
	curr = (*stack_a);
	while (head != NULL)
	{
		if (head->next == curr)
			break ;
		if (head->data > head->next->data)
			return (1);
		head = head->next;
	}
	return (0);
}
