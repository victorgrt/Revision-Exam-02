/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:28:04 by vgoret            #+#    #+#             */
/*   Updated: 2023/05/31 12:55:44 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;
	int	signe = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (result);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (signe * result);
}

int	is_prime(int num)
{
	int	i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	long int	modulo;
	long int	division;
	
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	division = nb / 10;
	modulo = nb % 10;
	if (division != 0)
		write(1, &division, 1);
	write(1, &modulo, 1);
}

int	main(int ac, char **av)
{
	int	nb = ft_atoi(av[1]);
	int	sum = 0;
	
	if (ac != 2 || ft_atoi(av[1]) < 0)
	{
		write(1, "0\n", 1);
		return (0);
	}
	while (nb > 0)
	{
		if (is_prime(nb--))
			sum  += (nb + 1);
		ft_putnbr(nb);
	}
}