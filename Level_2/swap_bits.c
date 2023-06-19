/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:42:28 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 11:32:09 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// int	main(void)
// {
// 	printf("%d\n", swap_bits(1));
// 	return (0);
// }

// unsigned char swap_bitted(unsigned char octet)
// {
// 	return (octet >> 4 | octet << 4);
// }

// int	main(int ac, char **av)
// {
// 	unsigned char c;

// 	if (ac != 2)
// 	{
// 		write(1, "\n", 1);
// 		return (0);
// 	}
// 	c = (unsigned char) av[1];
// 	c = swap_bitted(c);
// 	write(1, &c, 1);
// 	return (0);
// }

// unsigned char	swap_bits(unsigned char octet)
// {
// 	return (octet >> 4 | octet << 4);
// }

int	main(void)
{
	printf("%d\n", swap_bits(4));
}