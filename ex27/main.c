/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:37:59 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/20 20:06:21 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

static int	ft_validate_and_open(int argc, const char *arg)
{
	int	fd;

	if (argc == 1)
	{
		write(STDERR_FILENO, "File name missing.\n", 19);
		return (-1);
	}
	if (argc > 2)
	{
		write(STDERR_FILENO, "Too many arguments.\n", 20);
		return (-1);
	}
	fd = open(arg, O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Cannot read file.\n", 18);
		return (-1);
	}
	return (fd);
}

int	main(int argc, char **argv)
{
	int		fd;
	ssize_t	bytes_read;
	char	*buffer[BUFFER_SIZE];

	fd = ft_validate_and_open(argc, argv[1]);
	if (fd == -1)
		return (EXIT_FAILURE);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(STDOUT_FILENO, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
	return (EXIT_SUCCESS);
}
