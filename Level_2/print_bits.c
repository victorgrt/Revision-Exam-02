/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:14 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 12:16:05 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// void	print_bits(unsigned char octet)
// {
// 	int	z;
// 	int	oct;

// 	z = 128;
// 	oct = octet;
// 	while (z > 0)
// 	{
// 		if (z & oct)
// 			write(1, "1", 1);
// 		else
// 			write(1, "0", 1);
// 		z >>= 1;
// 	}
// }

void	print_bits(unsigned char octet)
{
	int	z;
	int	oct;

	z = 128;
	oct = octet;
	while (z > 0)
	{
		if (z & oct)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		z = z >> 1;
	}
}

int	main(void)
{
	print_bits(1);
	return (0);
}