/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_toarray.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:00:58 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:09:20 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		**ft_buffer_toarray(t_buffer *b)
{
	size_t	i;
	INT8	**ar;

	ar = NULL;
	if (!ft_arraylist_isempty(b))
	{
		i = 0;
		ar = (INT8 **)ft_array_new(b->count);
		while (i < b->count)
		{
			ar[i] = ft_bufferseg_tostr((t_bufferseg *)b->array[i]);
			++i;
		}
	}
	return (ar);
}
