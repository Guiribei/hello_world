/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_total_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:46:15 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 19:47:54 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.h"

int	get_total_size(int argc, char **argv)
{
	int	total_size;
	int	i;
	int	j;

	i = 1;
	total_size = 0;
	while (i < argc)
	{	
		j = 0;
		while (argv[i][j++])
			total_size++;
		i++;
	}
	return (total_size);
}
