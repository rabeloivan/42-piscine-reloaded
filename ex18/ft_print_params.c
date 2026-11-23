/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:45:01 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/23 19:15:29 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int	main(int argc, char **argv)
{
	int	offset;

	offset = 1;
	while (offset < argc)
	{
		ft_putstr(argv[offset]);
		ft_putchar('\n');
		offset++;
	}
	return (0);
}
