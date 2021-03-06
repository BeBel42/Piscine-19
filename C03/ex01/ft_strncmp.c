/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 13:09:25 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/15 12:15:41 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n || (!*s1 && !*s2))
		return (0);
	if (*s1 == *s2)
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	return (*s1 - *s2);
}
