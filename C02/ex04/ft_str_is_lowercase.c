/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:46:00 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 12:07:10 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isalphalowchar(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_str_is_lowercase(char *str)
{
	int b;

	b = 1;
	while (*str)
	{
		b *= isalphalowchar(*str);
		str++;
	}
	return (b);
}
