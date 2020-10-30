/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 08:33:43 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/23 18:57:53 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	mystrln(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = mystrln(src) + 1;
	j = -1;
	if (i < size)
		while (++j < i)
			dest[j] = src[j];
	else if (size)
	{
		while (++j < size - 1)
			dest[j] = src[j];
		dest[j] = 0;
	}
	return (i - 1);
}
