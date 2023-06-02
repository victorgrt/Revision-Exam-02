/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:40:30 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 11:58:44 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	
	if (start == 0 && end == 0)
	{
		res[0] = 0;
		return (res);
	}
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
        return (res);
}

int      main(void)
{
 int start = 0;
 int end = 0;
 
 int *arr = ft_range(start, end);
 
 int i = 0;
 while (i < 1 + abs(end - start))
 {
     printf("%d, ", arr[i]);
     ++i;
 }
 printf("\n");
}