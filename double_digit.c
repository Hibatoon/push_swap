/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharra <hcharra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:58:03 by hcharra           #+#    #+#             */
/*   Updated: 2024/02/17 20:42:07 by hcharra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(char **argv, int i, int j, int argc)
{
	while (j < argc)
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		j++;
	}
	return (0);
}

int	check_digit(char **argv, int i, int j)
{
	while (argv[i][j])
	{
		if (!(((argv[i][j] >= '0' && argv[i][j] <= '9') || ((j == 0
					&& argv[i][j] == '-') && (argv[i][j + 1] >= '0'
			&& argv[i][j + 1] <= '9')) || ((j == 0
					&& argv[i][j] == '+') && (argv[i][j + 1] >= '0'
						&& argv[i][j + 1] <= '9')))))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		j++;
	}
	return (0);
}
