/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:20:45 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 12:05:45 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isalphachar(char c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int		ft_str_is_alpha(char *str)
{
	int b;

	b = 1;
	while (*str)
	{
		b *= isalphachar(*str);
		str++;
	}
	return (b);
}
