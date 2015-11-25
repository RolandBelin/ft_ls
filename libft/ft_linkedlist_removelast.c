/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_removelast.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:14 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:23:38 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_linkedlist_removelast(t_linkedlist *ll, BOOL alsofreedata)
{
	t_segment	*back;

	back = NULL;
	if (!ft_linkedlist_isempty(ll))
	{
		back = ll->last->back;
		if (back != NULL)
		{
			ft_segment_setnext(back, NULL);
			if (back->back == NULL)
				ll->first = back;
		}
		else
			ll->first = NULL;
		if (alsofreedata)
			ft_segment_free(&ll->last, alsofreedata);
		ll->last = back;
		ll->count--;
	}
}
