/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_on_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 02:35:52 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 18:02:41 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.h"

void	print_string_on_node(t_node *node)
{
	while (node)
	{
		write(1, &node->letter, 1);
		node = node->next;
	}
}
