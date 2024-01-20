/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:45:48 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 00:46:31 by guribeir         ###   ########.fr       */
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

char	*create_string(const char *input);

#endif