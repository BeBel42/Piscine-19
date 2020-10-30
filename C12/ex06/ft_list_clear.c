/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:07:55 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/21 18:13:20 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *ptr;
	t_list *ptr2;

	ptr = begin_list;
	while (ptr)
	{
		if (free_fct)
			free_fct(ptr->data);
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
}
