/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagharbi <aagharbi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:57:25 by aagharbi          #+#    #+#             */
/*   Updated: 2024/07/04 15:27:04 by aagharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		a = str[i] >= 'A' && str[i] <= 'Z';
		b = str[i] >= 'a' && str[i] <= 'z';
		if (a || b)
			i++;
		else
			return (0);
	}
	return (1);
}
