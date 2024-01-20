/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:43:27 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 19:42:17 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	t_node	*head;

	head = NULL;
	if (argc == 1)
		str = "Hello world!\n";
	else
		str = create_string(argc, argv);
	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		add_node_to_list(&head, create_node(str[i]));
		i++;
	}
	print_string_on_node(head);
	if (str && argc > 1)
		free(str);
	free_list(head);
	return (0);
}
