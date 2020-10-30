/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:43:27 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 18:26:02 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isfullmatch(char *str, char *to_find, unsigned int i)
{
	int b;

	b = 1;
	while (*to_find)
	{
		b *= (*to_find == str[i]);
		to_find++;
		i++;
	}
	return (b);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0] && isfullmatch(str, to_find, i))
			return (&str[i]);
		i++;
	}
	return (0);
}
