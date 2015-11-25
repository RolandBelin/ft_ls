/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_removeall.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:53:58 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:23:14 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_linkedlist_removeall(t_linkedlist *ll, BOOL alsofree)
{
	if (!ft_linkedlist_isempty(ll))
	{
		while (ll->first)
			ft_linkedlist_removelast(ll, alsofree);
	}
}
