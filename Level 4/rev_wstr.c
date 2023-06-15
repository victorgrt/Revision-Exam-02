/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:31:27 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/08 01:10:10 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
on va a la fin;
tant quon est pas revenu au debut;
on recule jusqu'a trouver la fin du mot
on cherche mtn le debut du mot;
on setup notre start et notre flag;
tant quon a pas fait tout le mot;
*/
#include <stdio.h>

int	main(int ac, char **av)
{
	int i = 0;
	int flag = 0;
	int	end = 0;
	int start = 0;
	
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		while (i >= 0)
		{
			while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\0')
				i--;
			end = i;
			printf("%c", av[1][end]);
			while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
				i--;
			printf("%c", av[1][start]);
			start = i + 1;
			flag = start;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1, " " , 1);
			// i--;
		}	
	}
	write(1, "\n", 1);
	return (0);
}













// int	main(int ac, char **av)
// {
// 	int i = 0;
// 	int end;
// 	int	start;
// 	int flag;
// 	if (ac == 2)
// 	{
// 		while (av[1][i])
// 			i++;
// 		while (i >= 0)
// 		{
// 			while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
// 				i--;
// 			end = i;
// 			while (av[1][i] != ' ' && av[1][i] != ' ' && av[1][i])
// 				i--;
// 			start = i + 1;
// 			flag = start;
// 			while (start <= end)
// 			{
// 				write(1, &av[1][start], 1);
// 				start++;
// 			}
// 			if (flag != 0)
// 				write(1, " ", 1);
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }