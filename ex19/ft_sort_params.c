/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:06:58 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/23 19:15:49 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static int	ft_strcmp(const char *s1, const char *s2)
{
	int	offset;

	offset = 0;
	while (s1[offset] && s1[offset] == s2[offset])
		offset++;
	return ((unsigned char)s1[offset] - (unsigned char)s2[offset]);
}

static void	ft_putstr(const char *str)
{
	int	offset;

	offset = 0;
	while (str[offset])
	{
		ft_putchar(str[offset]);
		offset++;
	}
}

static void	ft_print_args(int argc, char **argv)
{
	int	offset;

	offset = 1;
	while (offset < argc)
	{
		ft_putstr(argv[offset]);
		ft_putchar('\n');
		offset++;
	}
}

int	main(int argc, char **argv)
{
	int		offset;
	int		next;
	char	*tmp;

	offset = 1;
	while (offset < argc)
	{
		next = offset + 1;
		while (next < argc)
		{
			if (ft_strcmp(argv[offset], argv[next]) > 0)
			{
				tmp = argv[offset];
				argv[offset] = argv[next];
				argv[next] = tmp;
			}
			next++;
		}
		offset++;
	}
	ft_print_args(argc, argv);
	return (0);
}
