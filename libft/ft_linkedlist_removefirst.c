/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_removefirst.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:08 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:23:30 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_linkedlist_removefirst(t_linkedlist *ll, BOOL alsofreedata)
{
	t_segment	*next;

	next = NULL;
	if (!ft_linkedlist_isempty(ll))
	{
		next = ll->first->next;
		if (next != NULL)
		{
			ft_segment_setback(next, NULL);
			if (next->next == NULL)
				ll->last = next;
		}
		else
			ll->last = NULL;
		if (alsofreedata)
			ft_segment_free(&ll->first, alsofreedata);
		ll->first = next;
		ll->count--;
	}
}
