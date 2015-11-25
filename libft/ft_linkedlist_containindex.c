/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_containindex.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:52:54 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:22:51 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL	ft_linkedlist_containindex(t_linkedlist *ll, size_t index)
{
	if (ft_linkedlist_isempty(ll))
		return (FALSE);
	else if (ll->count - 1 < index)
		return (FALSE);
	return (TRUE);
}
