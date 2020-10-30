/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 09:00:41 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/16 17:20:23 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		mystrlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	mystrcpy(char *a, char *b)
{
	while (*b)
		*(a++) = *(b++);
}

int		gettotalsize(int size, char **strs, char *sep)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (i < size)
	{
		s += mystrlen(strs[i]);
		i++;
	}
	return (s + (size - 1) * mystrlen(sep) + 1);
}

char	*myjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ret;
	int		strindex;

	if (!(ret = malloc(gettotalsize(size, strs, sep))))
		return (NULL);
	i = -1;
	strindex = 0;
	while (++i < size)
	{
		mystrcpy(&ret[strindex], strs[i]);
		strindex += mystrlen(strs[i]);
		if (i == size - 1)
			break ;
		mystrcpy(&ret[strindex], sep);
		strindex += mystrlen(sep);
	}
	ret[strindex] = 0;
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *ret;

	if (!size)
	{
		if (!(ret = malloc(1)))
			return (NULL);
		ret[0] = 0;
		return (ret);
	}
	ret = myjoin(size, strs, sep);
	return (ret);
}
