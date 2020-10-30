/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:51:05 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 12:39:33 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*ptr;
	t_list	*ptr2;
	int		i;

	ptr2 = 0;
	i = -1;
	while (++i < size)
	{
		if (!(ptr = ft_create_elem(strs[i])))
			break ;
		ptr->next = ptr2;
		ptr2 = ptr;
	}
	return (ptr2);
}
