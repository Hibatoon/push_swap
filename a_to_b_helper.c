/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharra <hcharra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:24:10 by hcharra           #+#    #+#             */
/*   Updated: 2024/02/14 23:11:49 by hcharra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b_help(int moves, t_stack **a, t_stack **b)
{
	if (moves < 0)
		neg_moves(moves, a);
	else if (moves > 0)
		pos_moves(moves, a);
	pb(a, b);
}
