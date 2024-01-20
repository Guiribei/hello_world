/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:43:27 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 18:02:34 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.h"

int	main(void)
{
	char	*str;
	int		i;
	t_node	*head;

	head = NULL;
	str = create_string("Hello world!\n");
	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		add_node_to_list(&head, create_node(str[i]));
		i++;
	}
	print_string_on_node(head);
	free(str);
	free_list(head);
	return (0);
}
