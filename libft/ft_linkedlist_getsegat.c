/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_getsegat.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:53:48 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:11:02 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_segment		*ft_linkedlist_getsegat(t_linkedlist *ll, size_t index)
{
	t_segment	*seg;
	t_segment	*temp;
	size_t		i;

	i = 0;
	if (!ft_linkedlist_isempty(ll) && ft_linkedlist_containindex(ll, index))
	{
		temp = (t_segment *)ll->first;
		while (i < index)
		{
			seg = (t_segment *)temp->next;
			temp = (t_segment *)seg;
			++i;
		}
		return (temp);
	}
	return (NULL);
}
