/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:09:33 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 17:17:26 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *endof1;

	if (!begin_list1)
		return ;
	if (!*begin_list1)
		*begin_list1 = begin_list2;
	endof1 = *begin_list1;
	while (endof1->next)
		endof1 = endof1->next;
	endof1->next = begin_list2;
}
