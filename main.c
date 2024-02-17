/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharra <hcharra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:58:35 by hcharra           #+#    #+#             */
/*   Updated: 2024/02/17 21:42:28 by hcharra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	b = NULL;
	if (!split_all(&argc, argv, &a))
	{
		// system("leaks push_swap");
		return (0);
	}
	if (error_full_check(&a))
	{
		free_stack(&a);
		// system("leaks push_swap");
		return (0);
	}
	if (!a)
		return (1);
	if (is_sorted(a))
	{		
		// system("leaks push_swap");
		return (0);
	}
	if (argc <= 11)
		{tiny_sort(&a, &b, argc);
		printf("tiny executed\n");
		}
	else
		large_sort(&a, &b);
	// free_stack(&a);
	// free_stack(&b);
	system("leaks push_swap");
}
