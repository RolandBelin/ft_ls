/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_addchr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:01:15 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:22:13 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL				ft_bufferseg_addchr(t_bufferseg *bs, INT8 c)
{
	if (ft_bufferseg_canaddchr(bs))
	{
		bs->data[bs->len] = c;
		bs->len++;
		return (TRUE);
	}
	return (FALSE);
}
