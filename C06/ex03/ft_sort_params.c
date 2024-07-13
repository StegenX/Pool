/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aagharbi <aagharbi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:21:40 by aagharbi          #+#    #+#             */
/*   Updated: 2024/07/13 14:36:41 by aagharbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[]) 
{
    int i;
    int j;
    char *temp;
    
    i = 1;
    while (argc > i)
    {
        j = i + 1;
        while (argc > j)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        ft_putstr(argv[i]);
		write(1,"\n", 1);
        i++;
    }
}
