/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagharbi <aagharbi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:48:01 by aagharbi          #+#    #+#             */
/*   Updated: 2024/07/16 15:53:09 by aagharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	range;

	if (min >= max)
		return (NULL);
	range = max - min;
	array = malloc(sizeof(int) * range);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		array[i] = min ;
		min++;
		i++;
	}
	return (array);
}
