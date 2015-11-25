/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_addchr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:00:11 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:04:56 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_buffer_addchr(t_buffer *b, INT8 c)
{
	t_bufferseg	*seg;

	if (b)
	{
		if (ft_arraylist_isempty(b))
			ft_arraylist_add(b, ft_bufferseg_new());
		else if (((t_bufferseg *)b->array[b->count - 1])->len == 32)
			ft_arraylist_add(b, ft_bufferseg_new());
		seg = (t_bufferseg *)b->array[b->count - 1];
		seg->data[seg->len] = c;
		seg->len++;
	}
}
