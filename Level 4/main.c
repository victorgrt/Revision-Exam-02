/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:48:53 by victor            #+#    #+#             */
/*   Updated: 2023/06/15 22:25:46 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*FT_SPLIT*/

char    *ft_strncpy(char *out, char *str, int n)
{
    int i = 0;

    while (str[i] && i < n)
    {
        out[i] = str[i];
        i++;
    }
    out[i] = '\0';
    return (out);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;
    char    **out;

    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }
    i = 0;
    out = malloc(sizeof(char *) * (wc + 1));
    if (!out)
        return (NULL);
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (j < i)
        {
            out[k] = malloc(sizeof(char *) * (i - j) + 1);
            if (!out[k])
                return (NULL);
            ft_strncpy(out[k], &str[j], (i - j));
            k++;
        }
    }
    return (out);
}

/*REV_WSTR*/

// int main(int ac, char **av)
// {
//     int i = 0;
//     int flag = 0;
//     int start = 0;
//     int end = 0;

//     if (ac == 2)
//     {
//         while (av[1][i])
//             i++;
//         while (i > 0)
//         {
//             while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\0')
//                 i--;
//             end = i;
//             while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
//                 i--;
//             start = i + 1;
//             flag = start;
//             while (start <= end)
//             {
//                 write(1, &av[1][start], 1);
//                 start++;
//             }
//             if (flag != 0)
//                 write(1, " ", 1);
//         }
//     }
//     write(1, "\n", 1);
//     return (0);
// }

/*SORT_INT_TAB*/