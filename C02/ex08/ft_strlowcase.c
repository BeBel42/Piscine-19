/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:02:47 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 12:11:42 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isuppercasealpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	getlowercase(char c)
{
	return (c - 'A' + 'a');
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (isuppercasealpha(str[i]))
			str[i] = getlowercase(str[i]);
		i++;
	}
	return (str);
}
