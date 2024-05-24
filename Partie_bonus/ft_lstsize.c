/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlel <ibouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:27:59 by ibouhlel          #+#    #+#             */
/*   Updated: 2024/05/22 15:10:55 by ibouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*block;

	i = 0;
	block = lst;
	if (block == NULL)
		return (0);
	while (block != NULL)
	{
		block = block->next;
		i++;
	}
	return (i);
}
