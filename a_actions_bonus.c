/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharra <hcharra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:56:23 by hcharra           #+#    #+#             */
/*   Updated: 2024/02/14 14:59:03 by hcharra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra_bonus(t_stack **a)
{
	t_stack	*temp;
	int		k;
	int		size;
	t_stack	*head;

	if ((!*a) || (!((*a)->next)))
		return ;
	if (list_size(*a) == 1)
		return ;
	temp = *a;
	k = 1;
	size = list_size(*a);
	while (k < size - 1)
	{
		temp = temp->next;
		k++;
	}
	head = temp->next;
	head->next = *a;
	*a = head;
	temp->next = NULL;
}

void	sa_bonus(t_stack *first_node, t_stack *second_node)
{
	int	temp;

	if ((!first_node) || (!second_node))
		return ;
	temp = first_node->data;
	first_node->data = second_node->data;
	second_node->data = temp;
}

void	ra_bonus(t_stack **a)
{
	t_stack	*first_element;
	t_stack	*last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	first_element = *a;
	*a = (*a)->next;
	last = *a;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = first_element;
	first_element->next = NULL;
}

void	pa_bonus(t_stack **first_el, t_stack **a)
{
	t_stack	*temp;
	t_stack	*removed;

	if (*first_el == NULL)
		return ;
	temp = add_node_bonus((*first_el)->data);
	temp->next = *a;
	*a = temp;
	removed = *first_el;
	*first_el = (*first_el)->next;
	free(removed);
}
