/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:54:21 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 12:40:21 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		c;
	t_list	*ptr;

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
