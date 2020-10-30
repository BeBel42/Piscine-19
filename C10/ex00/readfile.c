/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:53:43 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/20 11:52:07 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "myheader.h"

int		readfile(const char *str)
{
	int		filedes;
	char	buf[2048];
	int		bytes;
	int		closeerr;

	if ((filedes = open(str, O_RDONLY)) == -1)
		return (-1);
	while ((bytes = read(filedes, buf, 2048)) > 0)
		displaybuf(buf, bytes);
	closeerr = close(filedes);
	return ((bytes == -1 || closeerr == -1) ?
			-1 : 0);
}
