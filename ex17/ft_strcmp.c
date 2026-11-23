/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:45 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/22 00:37:43 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	offset;

	offset = 0;
	while (s1[offset] && s1[offset] == s2[offset])
		offset++;
	return ((unsigned char)s1[offset] - (unsigned char)s2[offset]);
}
