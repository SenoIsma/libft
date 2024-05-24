/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhlel <ibouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:12:45 by ibouhlel          #+#    #+#             */
/*   Updated: 2024/05/22 15:25:15 by ibouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((*lst) == NULL)
	{
		(*lst) = new;
		new->next = NULL;
	}
	else
	{
		new->next = (*lst);
		(*lst) = new;
	}
}
