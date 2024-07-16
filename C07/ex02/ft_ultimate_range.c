/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagharbi <aagharbi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:57:51 by aagharbi          #+#    #+#             */
/*   Updated: 2024/07/16 18:01:39 by aagharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	array = malloc(sizeof(int) * (i));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = array;
	i = 0;
	while (max > min)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (i);
}
