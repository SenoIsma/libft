/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:12:46 by ibouhlel          #+#    #+#             */
/*   Updated: 2024/05/20 18:14:10 by ibouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = ft_strlen(s);
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, i + 1);
	return (dup);
}
