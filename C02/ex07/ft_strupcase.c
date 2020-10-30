/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:32:59 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 12:10:11 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		islowercasealpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	getuppercase(char c)
{
	return (c - 'a' + 'A');
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (islowercasealpha(str[i]))
			str[i] = getuppercase(str[i]);
		i++;
	}
	return (str);
}
