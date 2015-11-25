/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_removeat.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:03 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:23:24 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_linkedlist_removeat(t_linkedlist *ll, size_t index, BOOL b)
{
	t_segment	*removed;

	if (ft_linkedlist_containindex(ll, index))
	{
		if ((removed = ft_linkedlist_getsegat(ll, index)) != NULL)
		{
			if (removed->next == NULL)
				ft_linkedlist_removelast(ll, b);
			else if (removed->back == NULL)
				ft_linkedlist_removefirst(ll, b);
			else
			{
				ft_segment_setnext(removed->back, removed->next);
				ft_segment_setback(removed->next, removed->back);
				ft_segment_free(&removed, b);
				ll->count--;
				removed = NULL;
			}
		}
	}
}
