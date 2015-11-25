/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_addstr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:01:21 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:27:29 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL		ft_bufferseg_addstr(t_bufferseg *bs, INT8 *str)
{
	size_t	i;

	i = 0;
	if (ft_bufferseg_canaddstr(bs, str))
	{
		while (str[i])
		{
			bs->data[bs->len + i] = str[i];
			++i;
		}
		bs->len = bs->len + i;
		return (TRUE);
	}
	else
		return (FALSE);
}
