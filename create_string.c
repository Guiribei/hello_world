/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:43:39 by guribeir          #+#    #+#             */
/*   Updated: 2024/01/20 00:45:30 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hello.h"

char	*create_string(const char *input)
{
	int		size;
	int		i;
	char	*result;

	size = 0;
	while (input[size])
		size++;
	result = (char *)(malloc((size + 1) * sizeof(char)));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (input[i])
	{
		result[i] = input[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
