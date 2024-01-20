/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:43:39 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 19:49:11 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.h"

char	*create_string(int argc, char **argv)
{
	int		total_size;
	int		i;
	int		j;
	int		pos;
	char	*result;

	total_size = get_total_size(argc, argv);
	result = (char *)(malloc((total_size + argc) * sizeof(char)));
	if (result == NULL)
		return (NULL);
	pos = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			result[pos] = argv[i][j];
			pos++;
			j++;
		}
		result[pos++] = ' ';
		i++;
	}
	result[pos - 1] = '\n';
	result[pos] = '\0';
	return (result);
}
