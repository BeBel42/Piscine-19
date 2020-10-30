/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 13:54:45 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 12:04:24 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] && n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	while (n > 0)
	{
		dest[i] = 0;
		n--;
		i++;
	}
	return (dest);
}
