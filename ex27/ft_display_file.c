/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:29:54 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/06 19:43:28 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	c;
	int		check;

	check = 1;
	while (check == 1)
	{
		check = read(fd, &c, 1);
		if (check == 1)
			write(1, &c, 1);
		if (check == -1)
			write(2, "Cannot read file.\n", 18);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}
