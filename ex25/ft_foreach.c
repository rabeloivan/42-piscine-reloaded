/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:37:29 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/22 00:47:55 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	offset;

	if (!tab || !f)
		return ;
	offset = 0;
	while (offset < length)
	{
		f(tab[offset]);
		offset++;
	}
}
