/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:47:27 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 12:39:12 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *first;
	t_list *second;
	t_list *tmp;

	if (!begin_list || !*begin_list)
		return ;
	first = *begin_list;
	second = first->next;
	first->next = 0;
	while (second)
	{
		tmp = second->next;
		second->next = first;
		first = second;
		second = tmp;
	}
	*begin_list = first;
}
