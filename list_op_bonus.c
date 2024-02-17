/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_op_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcharra <hcharra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:02:21 by hcharra           #+#    #+#             */
/*   Updated: 2024/02/14 23:03:07 by hcharra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*add_node_bonus(int content)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = content;
	node->index = 0;
	node->moves = 0;
	node->next = NULL;
	return (node);
}

void	append_node_bonus(t_stack **head, t_stack *new_node)
{
	t_stack	*temp;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

t_stack	*last_node_bonus(t_stack *lst)
{
	t_stack	*ptr;

	if (lst == NULL)
		return (lst);
	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

int	list_size_bonus(t_stack *lst)
{
	int		count;

	if (!lst)
		return (0);
	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
