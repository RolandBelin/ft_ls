/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_setat.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:19 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:12:02 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_linkedlist_setat(t_linkedlist *ll, void *data, size_t index)
{
	if (ll == NULL && ((ll = ft_linkedlist_new()) == NULL))
		return ;
	if (!ft_linkedlist_containindex(ll, index))
		ft_linkedlist_expendlast(ll, (index + 1) - ll->count);
	ft_segment_setdata(ft_linkedlist_getsegat(ll, index), data);
}
