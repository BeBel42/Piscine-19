0/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:35:51 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 14:29:22 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void freeandrepair(t_list **ptr, t_list **prev, void *data_ref,
int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*next;

	next = (*ptr)->next;
	if (cmp && cmp((*ptr)->data, data_ref) == 0)
	{	
		if (free_fct)
			free_fct((*ptr)->data);
		free(*ptr);
		if (*prev)
			(*prev)->next = next;
		*ptr = next;
		return ;
	}
	*prev = *ptr;
	*ptr = next;
}

void ft_list_remove_if(t_list **begin_list, void *data_ref,
int (*cmp)(), void (*free_fct)(void *))
{
	t_list *prev;

	prev = 0;
	while (begin_list && *begin_list)
	{
		freeandrepair(begin_list, &prev, data_ref,
		cmp, free_fct);
	}
}
