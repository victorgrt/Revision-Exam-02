/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:28:04 by victor            #+#    #+#             */
/*   Updated: 2023/06/15 22:56:44 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

int ascending(int a, int b)
{
	return (a <= b);
}

//if ascending != 0 right order

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *tmp;
    int     swap;

    tmp = lst;
    while (lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}

t_list	*ft_lstnew(int  content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

int main(int ac, char **av)
{
    t_list  *liste;

    int i = 0;

    if (ac == 5)
    {
        while (i < ac / 2)
        {
            liste = ft_lstnew(atoi(av[i]));
            ft_lstadd_front(&liste, ft_lstnew(atoi(av[i + 1])));
            i++;
        }
        while (liste->next != NULL)
        {
            printf("%d\n", liste->data);
            liste = liste->next;
        }
    }
    return (0);
}