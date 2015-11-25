/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_canaddstr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:52:22 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:22:29 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL	ft_bufferseg_canaddstr(t_bufferseg *bs, char *str)
{
	if ((bs != NULL && (str && *str)) && (ft_strlen(str) + bs->len < 32))
		return (TRUE);
	return (FALSE);
}
