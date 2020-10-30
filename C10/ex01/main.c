/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 08:40:33 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/24 11:00:09 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <libgen.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	displayerror(char *argv0, char *argvi, int errnoparam)
{
	char *bin;
	char *errormessage;
    
	bin = basename(argv0);
	errormessage = strerror(errnoparam);
	while (*bin)
		write(2, bin++, 1);
	write(2, ": ", 2);
	while (*argvi)
		write(2, argvi++, 1);
	write(2, ": ", 2);
	while (*errormessage)
		write(2, errormessage++, 1);
	write(2, "\n", 1);
}

int		readfile(char *path)
{
	int		fd;
	char	buf[2048];
	int		bytes;
	int		closeerr;

	if ((fd = ((path == 0) ? 0 : open(path, O_RDONLY))) == -1)
        return (-1);
	if (fd != 0)
	{
		while ((bytes = read(fd, buf, 2048)) > 0)
			write(1, buf, bytes);
		closeerr = close(fd);
	}
	else
		closeerr = 0;
	while (fd == 0 && (bytes = read(fd, buf, 2048)) > 0)
		write(1, buf, bytes);
	return ((bytes == -1 || closeerr == -1) ?
	-1 : 0);
}

int		isminus(char *str)
{
	return (str[0] == '-' && str[1] == 0);
}

int		main(int argc, char *argv[])
{
	int i;
	int ret;

	ret = 0;
	if (argc == 1)
		if (readfile(0) == -1)
		{
			displayerror(argv[0], 0, errno);
			ret = 1;
		}
	i = 0;
	while (++i < argc)
		if (readfile(isminus(argv[i]) ? 0 : argv[i]) == -1)
		{
			displayerror(argv[0], argv[i], errno);
			ret = 1;
		}
	return (ret);
}
