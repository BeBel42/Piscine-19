/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 16:13:16 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/25 14:36:06 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			myprint(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void			myswap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

unsigned int	getindexofdiff(char **a, char **b)
{
	int i;

	i = 0;
	while ((*a)[i] && (*a)[i] == (*b)[i])
		i++;
	return (i);
}

void			mysort(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc - 1)
		{
			k = getindexofdiff(&argv[j], &argv[j + 1]);
			if (argv[j][k] > argv[j + 1][k])
				myswap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

int				main(int argc, char *argv[])
{
	int			i;
	char		*ignore;

	ignore = argv[0];
	i = 0;
	mysort(argc, argv);
	while (i < argc)
	{
		if (argv[i] != ignore)
		{
			myprint(argv[i]);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
