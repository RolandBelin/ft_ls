/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_canaddchr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:52:16 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:22:17 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL	ft_bufferseg_canaddchr(t_bufferseg *bs)
{
	if (bs != NULL && bs->len < 32)
		return (TRUE);
	return (FALSE);
}
