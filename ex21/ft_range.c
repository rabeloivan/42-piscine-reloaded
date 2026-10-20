/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:41:16 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/20 11:51:44 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static long	ft_abs(long n)
{
	if (n < 0)
		return (-(n));
	return (n);
}

int	*ft_range(int min, int max)
{
	long	range;
	int		*result;
	int		i;

	if (min >= max)
		return (NULL);
	range = ft_abs((long)max - (long)min);
	result = (int *)malloc(range * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (i < range)
		result[i++] = min++;
	return (result);
}
