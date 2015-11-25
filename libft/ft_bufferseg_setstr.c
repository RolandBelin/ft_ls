/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_setstr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:01:46 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:52:31 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_bufferseg_setstr(t_bufferseg *seg, INT8 *str)
{
	size_t	i;

	i = 0;
	if (seg && str)
	{
		while (i < 32 && str[i])
		{
			seg->data[i] = str[i];
			++i;
		}
		seg->len = i + 1;
	}
}
