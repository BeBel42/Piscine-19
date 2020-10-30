/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:41:38 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/25 14:42:50 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			mystrlen(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int			main(int argc, char *argv[])
{
	argc++;
	write(1, argv[0], mystrlen(argv[0]));
	write(1, "\n", 1);
	return (0);
}
