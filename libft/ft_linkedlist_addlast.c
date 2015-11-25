/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_addlast.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:52:48 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:10:37 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_linkedlist_addlast(t_linkedlist *ll, void *data)
{
	t_segment	*seg;
	t_segment	*old_last;

	old_last = NULL;
	if ((ll != NULL) && (seg = ft_segment_new()) != NULL)
	{
		old_last = ll->last;
		ft_segment_setdata(seg, data);
		ft_segment_setback(seg, old_last);
		if (old_last != NULL)
		{
			ft_segment_setnext(old_last, seg);
			if (ll->first == NULL)
				ll->first = old_last;
		}
		if (ll->first == NULL)
			ll->first = seg;
		ll->count++;
		ll->last = seg;
	}
}
