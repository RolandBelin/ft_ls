/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_swap.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 07:00:47 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 12:00:31 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

static t_linkedlist		*ft_linkedlist_swarray(t_linkedlist *ll)
{
	t_linkedlist		*l2;
	UINT32				i;

	i = 1;
	l2 = ft_linkedlist_new();
	while (i < ll->count)
	{
		ft_linkedlist_addlast(l2, ft_linkedlist_getat(ll, i));
		++i;
	}
	return (l2);
}

void					ft_linkedlist_swap(t_linkedlist **ll)
{
	INT32				i;
	t_linkedlist		*l2;
	
	i = 0;
	l2 = ft_linkedlist_new();
	while (i < (*ll)->count)
	{
		ft_linkedlist_addlast(l2, ft_linkedlist_getat(*ll,
					(*ll)->count - (i + 1)));
		++i;
	}
	ft_linkedlist_free(ll, FALSE);
	*ll = l2;
}
