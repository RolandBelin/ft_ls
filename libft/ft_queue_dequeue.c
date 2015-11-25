/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_dequeue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:08:04 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:12:23 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_queue_dequeue(t_queue *q)
{
	void	*ret;

	ret = NULL;
	if (ft_linkedlist_isempty(q) == FALSE)
	{
		ret = q->last;
		ft_linkedlist_removelast(q, FALSE);
	}
	return (ret);
}
