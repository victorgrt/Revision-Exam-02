/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:35:36 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 11:39:30 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	signe = 1;
	int	result = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		signe *= -1;
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * signe);
}

void	print_hexa(int nb)
{
	char *base = "0123456789abcdef";
	if (nb > 16)
		print_hexa(nb / 16);
	nb = nb % 16;
	write(1, &base[nb], 1);
}

int	main(int ac, char **av)
{
	int	nb = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	nb = ft_atoi(av[1]);
	print_hexa(nb);
}