/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:52:19 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 15:03:32 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	expand_str(char *str)
{
	int	i = 0;
	int flag;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			flag = 1;
		if (!(str[i] == ' ' || str[i] == '\t'))
		{
			if (flag)
				write(1, "   ", 3);
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	// int	i;
	// int	flag;
	
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	// printf("%s\n", expand(av[1]));
	// i = 0;
	// while (av[1][i] == ' ' || av[1][i] == '\t')
	// 	i++;
	// while (av[1][i])
	// {
	// 	if (av[1][i] == ' ' || av[1][i] == '\t')
	// 		flag = 1;
	// 	if (!(av[1][i] == ' ' || av[1][i] == '\t'))
	// 	{
	// 		if (flag)
	// 			write(1, "   ", 3);
	// 		flag = 0;
	// 		write(1, &av[1][i], 1);
	// 	}
	// 	i++;
	// }
	expand_str(av[1]);
	write(1, "\n", 1);
	return (0);
}