/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:23:35 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 12:36:27 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *ptr;

	if (!begin_list)
		return (0);
	ptr = begin_list;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
