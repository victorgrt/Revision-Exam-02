/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoret <vgoret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:23:40 by vgoret            #+#    #+#             */
/*   Updated: 2023/06/01 14:31:16 by vgoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

t_list	*ft_lst_new(void	*content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = content;
	new->next = NULL;
	return (new);
}

int	ft_list_size(t_list *begin_list)
{
	int	i = 0;
	while(begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

int	main(void)
{
	t_list	*tab1 = ft_lst_new("I");
	t_list	*tab2 = ft_lst_new("have");
	t_list	*tab3 = ft_lst_new("the high ground");
	t_list	*tab4 = ft_lst_new(", It's over");
	t_list	*tab5 = ft_lst_new("Anakin");
	tab1->next = tab2;
	tab2->next = tab3;
	tab3->next = tab4;
	tab4->next = tab5;

	printf("%d\n", ft_list_size(tab1));
	return (0);
}