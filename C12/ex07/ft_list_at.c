/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:20:30 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 12:37:06 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
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
