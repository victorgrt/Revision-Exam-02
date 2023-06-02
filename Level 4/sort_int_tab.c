/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:19:34 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 15:38:10 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp = 0;

	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int *tab;

	tab = malloc(sizeof(int) * 5);
	if (!tab)
		return (1);
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 1;
	tab[3] = -1;
	tab[4] = 5;
	int size = 5;
	sort_int_tab(tab, size);
	int i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}