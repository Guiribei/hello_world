/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:45:48 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 18:02:36 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELLO_H
# define HELLO_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	char			letter;
	struct s_node	*next;
}	t_node;

void	add_node_to_list(t_node **head, t_node *new_node);
char	*create_string(const char *input);
t_node	*create_node(char c);
void	free_list(t_node *head);
void	print_string_on_node(t_node *node);

#endif