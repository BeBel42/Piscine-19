/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:56:46 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/21 08:22:34 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	myswap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	mysort(int argc, char **argv, int (*cmp)(char *, char *))
{
	int i;
	int j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (cmp(argv[j], argv[j + 1]) > 0)
				myswap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int argc;

	argc = 0;
	while (tab[argc])
		argc++;
	mysort(argc, tab, cmp);
}
