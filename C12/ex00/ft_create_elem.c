/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 09:05:50 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 12:33:22 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *ptr;

	if (!(ptr = malloc(sizeof(t_list))))
		return (0);
	ptr->data = data;
	ptr->next = 0;
	return (ptr);
}
