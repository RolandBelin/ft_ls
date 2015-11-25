/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:07:49 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:08:07 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			*ft_memmove(void *dst, const void *src, size_t n)
{
	UINT8	*s;

	if (dst && src)
	{
		s = (UINT8 *)malloc(sizeof(UINT8) * n);
		ft_memcpy(s, src, n);
		ft_memcpy(dst, s, n);
		free(s);
		return (dst);
	}
	else
		return (NULL);
}
