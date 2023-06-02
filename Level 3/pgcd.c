/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:27:01 by vgoret            #+#    #+#             */
/*   Updated: 2023/05/25 15:33:46 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	tableau_de_diviseur(char *str, char *str2)
{
	int num1 = atoi(str);
	int	num2 = atoi(str2);
	int	i = 1;
	int	max = 0;
	while (i <= num1 || i <= num2)
	{
		if (num1 % i == 0 && num2 % i == 0)
			max = i;
		i++;
	}
	printf("%d\n", max);
}

int	main(int ac, char **av)
{
	tableau_de_diviseur(av[1], av[2]);
	
	return (0);
}