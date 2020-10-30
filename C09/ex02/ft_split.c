/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:22:31 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/19 16:00:22 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_is_separator(char c, char *charset)
{
	while (*charset)
		if (c == *(charset++))
			return (1);
	return (0);
}

int			ft_wordlen(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] && !ft_is_separator(str[i], charset))
		i++;
	return (i);
}

int			ft_wordcount(char *str, char *charset)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		i = ft_wordlen(str, charset);
		if (i)
			j++;
		str += i;
	}
	return (j);
}

char		*ft_mallocstring(char *src, int n)
{
	char *dest;

	if (!(dest = malloc(n + 1)))
		return (NULL);
	dest[n] = 0;
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char		**ft_split(char *str, char *charset)
{
	unsigned int	n;
	char			**r;
	int				rsize;
	int				i;

	rsize = ft_wordcount(str, charset);
	if (!(r = malloc((rsize + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (i < rsize)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		n = ft_wordlen(str, charset);
		if (!(r[i] = ft_mallocstring(str, n)))
			return (NULL);
		str += n;
		i++;
	}
	r[rsize] = 0;
	return (r);
}
