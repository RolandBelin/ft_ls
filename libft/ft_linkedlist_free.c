/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:08 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:23:00 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_linkedlist_free(t_linkedlist **ll, BOOL alsodata)
{
	if (ll == NULL || *ll == NULL)
		return ;
	if (ft_linkedlist_isempty(*ll) != FALSE)
	{
		ft_linkedlist_removeall(*ll, alsodata);
		(*ll)->count = 0;
		(*ll)->last = NULL;
		(*ll)->first = NULL;
	}
	free(*ll);
	*ll = NULL;
	ll = NULL;
}
