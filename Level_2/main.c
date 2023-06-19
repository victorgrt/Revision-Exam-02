/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:26:04 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/19 17:43:24 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*swap bits*/
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) || (octet << 4));
}

/*reverse bits*/
unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	res = 0;
	
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res)
}

#include <unistd.h>

/*print bits*/
void	print_bits(unsigned char octet)
{
	i = 8;
	unsigned char bit = 0;

	while (i < 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char	octet = 0;

	while (i < 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char	bit = 0;
	while (i > 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

unsigned	char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + octet % 2;
		octet = octet / 2;
		i--;		
	}
	return (res);
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char bit = 0;

	while (i > 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}
