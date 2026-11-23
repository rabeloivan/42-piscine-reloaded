/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:41:16 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/23 19:04:24 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	range;
	int		*result;
	long	offset;

	if (min >= max)
		return (NULL);
	range = (long)max - min;
	result = malloc(range * sizeof(int));
	if (!result)
		return (NULL);
	offset = 0;
	while (offset < range)
	{
		result[offset] = min;
		offset++;
		min++;
	}
	return (result);
}
