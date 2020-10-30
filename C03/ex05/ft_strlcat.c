/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:13:01 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/14 18:53:28 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	mystrlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int total;

	if (mystrlen(dest) < size)
		total = mystrlen(src) + mystrlen(dest);
	else
		total = size + mystrlen(src);
	while (*(dest++) && size)
		size--;
	dest--;
	i = 0;
	while (src[i] && i < size - 1 && size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = 0;
	return (total);
}
