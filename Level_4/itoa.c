/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:53:15 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 14:07:53 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len_size(int nb)
{
	int i = 0;
	if (nb < 0)
	{
		i++;
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

// char	*ft_itoa(int nbr)
// {
// 	int	len = len_size(nbr);
// 	char	*res = malloc(sizeof(char) * len + 1);
// 	if (!res)
// 		return (NULL);
// 	res[len] = '\0';
// 	if (nbr < 0)
// 	{
// 		res[0] = '-';
// 		nbr = nbr * (-1);
// 	}
// 	while (nbr)
// 	{
// 		res[len - 1] = nbr % 10 + '0';
// 		nbr = nbr / 10;
// 		len--;
// 	}
// 	return (res);
// }

int	get_len(int nb)
{
	int	i = 0;
	
	if (nb < 0)
	{
		nb = nb * (-1);
		i++;	
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		len = get_len(nb);
	char	*res = malloc(sizeof(char) * len + 1);
	
	res[len] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * (-1);
	}
	while (nb && len != 0)
	{
		res[len - 1] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (res);
}

int	main(void)
{
	printf("%s\n", ft_itoa(420));
	return (0);
}