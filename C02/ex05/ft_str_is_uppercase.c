/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:08:33 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/12 15:12:42 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isalphaupchar(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_str_is_uppercase(char *str)
{
	int b;

	b = 1;
	while (*str)
	{
		b *= isalphaupchar(*str);
		str++;
	}
	return (b);
}
