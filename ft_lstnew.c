/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlel <ibouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:06:56 by ibouhlel          #+#    #+#             */
/*   Updated: 2024/05/22 15:22:58 by ibouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*block;

	block = malloc(sizeof(t_list));
	if (block == NULL)
		return (NULL);
	block->content = content;
	block->next = NULL;
	return (block);
}
