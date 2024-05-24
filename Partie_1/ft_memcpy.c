/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlel <ibouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 08:54:09 by ibouhlel          #+#    #+#             */
/*   Updated: 2024/05/21 14:34:14 by ibouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*s;

	s = (unsigned char *)src;
	str = (unsigned char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	const char	*source = "Ceci est un test";
	char	destination[17];
	printf("La source : %s\n", source);
	ft_memcpy(destination, source, 20);
	printf("La copie : %s\n", destination);
	return (0);
}*/
