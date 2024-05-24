/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:47:11 by ibouhlel          #+#    #+#             */
/*   Updated: 2024/05/21 08:56:40 by ibouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	if (source == destination || n == 0)
		return (dest);
	if (destination > source && destination - source < (int)n)
	{
		i = n;
		while (i-- > 0)
			destination[i] = source[i];
	}
	else if (source > destination && source - destination < (int)n)
	{
		i = -1;
		while (++i < n)
			destination[i] = source[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
