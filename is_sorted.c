/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharra <hcharra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:58:11 by hcharra           #+#    #+#             */
/*   Updated: 2024/02/17 20:54:03 by hcharra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_sorted(t_stack *a)
{
	t_stack	*temp;
	
	if(!a)
		return (false);
	temp = a;
	while (temp->next && temp)
	{
		if (temp->data > temp->next->data)
			return (false);
		temp = temp->next;
	}
	return (true);
}
