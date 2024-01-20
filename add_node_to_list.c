/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_to_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:15:33 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 18:02:26 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.h"

void	add_node_to_list(t_node **head, t_node *new_node)
{
	t_node	*tmp;

	tmp = *head;
	if (!new_node)
		return ;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return ;
}
