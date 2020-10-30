/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:13:16 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/25 14:42:12 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		myprint(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int			main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		myprint(argv[argc - i++]);
		write(1, "\n", 1);
	}
	return (0);
}
