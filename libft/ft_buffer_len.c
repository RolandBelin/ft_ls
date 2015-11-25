/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:00:52 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:05:01 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_buffer_len(t_buffer *b)
{
	size_t	i;
	size_t	ret;

	ret = 0;
	if (!ft_arraylist_isempty(b))
	{
		i = 0;
		while (i < b->count)
		{
			ret = ret + ((t_bufferseg *)b->array[i])->len;
			++i;
		}
	}
	return (ret);
}
