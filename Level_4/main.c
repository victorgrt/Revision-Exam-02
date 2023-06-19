/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:48:53 by victor            #+#    #+#             */
/*   Updated: 2023/06/19 15:18:03 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_len(int nb)
{
	int	i = 0;

	if (nb < 0)
	{
		i++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int	len = ft_len(nbr);
	// printf("%d\n", len);
	char	*nombre = malloc(sizeof(char *) * len + 1);

	if (nbr < 0)
	{
		nombre[0] = '-';
		nbr = nbr * -1;
	}
	nombre[len] = '\0';
	while (nbr)
	{
		nombre[len - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--; 
	}
	return (nombre);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	nb = atoi(av[1]);
		printf("%s\n", ft_itoa(nb));	
	}
	return (0);
}