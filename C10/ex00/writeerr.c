/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writeerr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:51:50 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/20 11:46:44 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writeerr(const char *str)
{
	while (*str)
		write(STDERR_FILENO, str++, 1);
}
