/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharra <hcharra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:42:01 by hcharra           #+#    #+#             */
/*   Updated: 2024/02/15 13:29:53 by hcharra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *first_node, t_stack *second_node)
{
	int	temp;

	if ((!first_node) || (!second_node))
		return ;
	temp = first_node->data;
	first_node->data = second_node->data;
	second_node->data = temp;
	write(1, "sa\n", 3);
}

void	rra(t_stack **a)
{
	t_stack	*head;
	t_stack	*last_1;
	int		size;
	int		k;

	last_1 = *a;
	k = 1;
	size = list_size(*a);
	while (k < size - 1)
	{
		last_1 = last_1->next;
		k++;
	}
	head = last_1->next;
	head->next = *a;
	*a = head;
	last_1->next = NULL;
	write(1, "rra\n", 4);
}

void	ra(t_stack **a)
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
	write(1, "ra\n", 3);
}

void	pa(t_stack **first_el, t_stack **a)
{
	t_stack	*temp;
	t_stack	*removed;

	if (*first_el == NULL)
		return ;
	temp = add_node((*first_el)->data);
	temp->next = *a;
	*a = temp;
	removed = *first_el;
	*first_el = (*first_el)->next;
	free(removed);
	write(1, "pa\n", 3);
}
