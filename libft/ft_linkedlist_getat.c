/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_getat.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:53:22 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:53:23 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_linkedlist_getat(t_linkedlist *ll, size_t index)
{
	if (ft_linkedlist_containindex(ll, index))
		return (ft_segment_getdata(ft_linkedlist_getsegat(ll, index)));
	return (NULL);
}
