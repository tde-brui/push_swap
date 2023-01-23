/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils2.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/19 13:03:22 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/01/23 15:57:33 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

long long	ft_atoi(const char *str)
{
	int			i;
	int			minuscounter;
	long long	result;

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

int	input_val(int argc, char **argv)
{
	int	i;
	int	j;
	int	input;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (1);
		j = 0;
		if (argv[i][0] == '-')
			j++;
		while (argv[i][j])
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
				return (1);
			j++;
		}
		i++;
	}
	if (check_duplicate(argc, argv) == 1)
		return (1);
	return (0);
}

int	check_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i]))
				return (1);
			j++;
		}
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
