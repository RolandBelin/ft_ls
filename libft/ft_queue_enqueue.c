/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_enqueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:08:12 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:24:10 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL		ft_queue_enqueue(t_queue *q, void *data)
{
	if (q == NULL)
		return (FALSE);
	if (data)
		ft_linkedlist_addlast(q, data);
	return (TRUE);
}
