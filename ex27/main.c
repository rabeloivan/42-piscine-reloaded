/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:37:59 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/22 00:11:46 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define ERROR -1

static int	ft_error(const char *msg)
{
	int	len;

	len = 0;
	while (msg[len])
		len++;
	write(STDERR_FILENO, msg, len);
	return (ERROR);
}

static int	ft_validate_and_open(int argc, const char *arg)
{
	int	fd;

	if (argc == 1)
		return (ft_error("File name missing.\n"));
	if (argc > 2)
		return (ft_error("Too many arguments.\n"));
	fd = open(arg, O_RDONLY);
	if (fd == ERROR)
		return (ft_error("Cannot read file.\n"));
	return (fd);
}

int	main(int argc, char **argv)
{
	int		fd;
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = ft_validate_and_open(argc, argv[1]);
	if (fd == ERROR)
		return (EXIT_FAILURE);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(STDOUT_FILENO, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
	if (bytes_read == ERROR)
	{
		ft_error("Cannot read file.\n");
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
