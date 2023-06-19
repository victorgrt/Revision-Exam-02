/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:40:41 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/02 14:14:11 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i = 0;

	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s2);
}

char	**ft_split(char *str)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;
	int	wc = 0;
	char	**out;
	while (str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' '&& str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	out = malloc(sizeof(char *) * wc + 1);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = malloc(sizeof(char) * (i - j) + 1);
			ft_strncpy(out[k], &str[j], i - j);
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}

char	*ft_strncpy2(char *s1, char *s2, int n)
{
	int i = 0;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s2);
}

/*
On initialise nos variables : 3 compteurs, un char ** et un words count;
Tant que notre chaine existe on la parcours si elle existe et si c'est des espaces on avance;
Si str[i] alors on incremente notre wc;
Condition invesere de la premiere et on avance
On malloc notre tableau en fonction du wc trouve; 

On repart de 0 avec notre compteur
*/

char	**ft_split2(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	char	**out;
	
	while (str[i]) 
	{
		while (str[i] && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != '\t' && str[i] != '\n' && str[i] != ' '))
			i++;
	}
	out = malloc(sizeof(char *) * (wc + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy2(out[k], &str[j], i - j);
			k++;
		}
	}
	return (out);
}

char	*ft_strncpy3(char *s1, char *s2, int n)
{
	int i = 0;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s2);
}

char	**ft_split3(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	char	**out;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;	
	}
	printf("wc %d\n", wc);
	out = malloc(sizeof(char *) * (wc + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = malloc(sizeof(char) * (i - j) + 1);
			ft_strncpy3(out[k], &str[j], (i - j));
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}

int	main(int ac, char **av)
{
	char	**tab;
	if (ac == 2)
	{
		tab = ft_split3(av[1]);
		int i = 0;
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			i++;
		}
	}
	else
		printf("Args\n");
	return (0);
}
