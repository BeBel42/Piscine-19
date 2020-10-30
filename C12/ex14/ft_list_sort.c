/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:24:54 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 19:32:52 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int mylist_size(t_list *begin_list)
{
	int c;
	t_list *ptr;

	if (!begin_list)
		return (0);
	c = 1;
	ptr = begin_list->next;
	while (ptr)
	{
		ptr = ptr->next;
		c++;
	}
	return (c);
}

t_list *listat(t_list *begin_list, unsigned int nbr)
{
	t_list *ptr;

	ptr = begin_list;
	while (nbr--)
	{
		if (!ptr)
			return (0);
		ptr = ptr->next;
	}
	return (ptr);
}

t_list *swaplist(t_list *prev, t_list *a, t_list *b, t_list *next)
{
	if (prev)
		prev->next = b;
	b->next = a;
	a->next = next;
	return (b);
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int i;
	int j;
	int size;

	if (!begin_list || !*begin_list)
		return;
	size = mylist_size(*begin_list);
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size - 1)
		{
			if (0 == j)
				*begin_list = swaplist(0, *begin_list,
				(*begin_list)->next, (*begin_list)->next->next);
			else
				swaplist(listat(j - 1), listat(j), listat(j + 1), listat(j + 2));
		}
	}
}
