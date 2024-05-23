/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlel <ibouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:32:57 by ibouhlel          #+#    #+#             */
/*   Updated: 2024/05/21 14:51:09 by ibouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;

	i = 0;
	j = 0;
	if (dst == NULL && sz == 0)
		return (0);
	if (src == NULL && sz == 0)
		return (0);
	while (dst[i] != '\0' && i < sz)
		i++;
	if (i == sz)
		return (i + ft_strlen(src));
	len_dest = i;
	while (i < (sz - 1) && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dest + ft_strlen(src));
}
