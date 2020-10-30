/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 11:04:56 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/20 11:47:30 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

int		main(int argc, char *argv[])
{
	if (argc < 2)
		writeerr("File name missing.\n");
	else if (argc > 2)
		writeerr("Too many arguments.\n");
	else if (readfile(argv[1]) == -1)
		writeerr("Cannot read file.\n");
	return (0);
}
