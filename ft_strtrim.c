/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlel <ibouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:25:38 by ibouhlel          #+#    #+#             */
/*   Updated: 2024/05/21 15:20:57 by ibouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	if (i >= len)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (len - i + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, len - i + 1);
	while (i < len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
