/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:19:20 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 12:13:21 by mlefevre         ###   ########.fr       */
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

int		isuppercasealpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	getlowercase(char c)
{
	return (c - 'A' + 'a');
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int isnewword;
	int isnum;

	i = 0;
	isnewword = 1;
	isnum = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			isnum = 1;
		else
			isnum = 0;
		if (islowercasealpha(str[i]) && isnewword)
			str[i] = getuppercase(str[i]);
		if (isuppercasealpha(str[i]) && !isnewword)
			str[i] = getlowercase(str[i]);
		if (!(isnum || isuppercasealpha(str[i]) || islowercasealpha(str[i])))
			isnewword = 1;
		else
			isnewword = 0;
		i++;
	}
	return (str);
}
