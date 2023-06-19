/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:32:35 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 14:50:53 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	hidenp(char *s1, char *s2)
{
	int	i = 0;
	int j = 0;

	while (s2[j] && s1[i])
	{
		if (s1[i] == s2[j])
		{
			printf("%c found in %d\n", s1[i], j);
			i++;
		}
		j++;
	}
	if (s1[i] == '\0')
	{
		write(1, "1\n", 2);
		return (0);	
	}
	write(1, "0\n", 2);
	return (1);
}

int	main(int ac, char **av)
{
	// int	i = 0;
	// int	j = 0;
	
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	// while (av[2][j] && av[1][i])
	// {
	// 	if (av[2][j] == av[1][i])
	// 		i++;
	// 	j++;
	// }
	// if (av[1][i] == '\0')
	// {
	// 	write(1, "1\n", 2);
	// 	return (0);
	// }
	// write(1, "0\n", 2);
	hidenp(av[1], av[2]);
	return (0);
}