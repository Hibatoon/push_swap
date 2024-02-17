/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharra <hcharra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:12:38 by hcharra           #+#    #+#             */
/*   Updated: 2024/02/15 13:30:08 by hcharra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack **a, t_stack **b)
{
	if (!*a || !*b)
		return ;
	rra_bonus(a);
	rrb_bonus(b);
	write(1, "rrr\n", 4);
}

void	rr(t_stack **a, t_stack **b)
{
	if (!*a || !*b)
		return ;
	ra_bonus(a);
	rb_bonus(b);
	write(1, "rr\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	if (!*a || !*b)
		return ;
	sa_bonus(*a, (*a)->next);
	sb_bonus(*b, (*b)->next);
	write(1, "ss\n", 3);
}
