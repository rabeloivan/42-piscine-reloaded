/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:19 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/22 00:35:04 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	offset;

	if (!str)
		return ;
	offset = 0;
	while (str[offset])
	{
		ft_putchar(str[offset]);
		offset++;
	}
}
