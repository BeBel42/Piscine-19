/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displaybuf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:51:43 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/20 11:51:06 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	displaybuf(const char *str, int size)
{
	int i;

	i = 0;
	while (i < size)
		write(STDOUT_FILENO, &str[i++], 1);
}
