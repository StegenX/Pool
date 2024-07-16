/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagharbi <aagharbi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:43:14 by aagharbi          #+#    #+#             */
/*   Updated: 2024/07/16 18:44:23 by aagharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		c;

	str = malloc(sizeof(char));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[c] = strs[i][j];
			c++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			str[c] = sep[j];
			c++;
			j++;
		}
		i++;
	}
	str[c] = '\0';
	return (str);
}
