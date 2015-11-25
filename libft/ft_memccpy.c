/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:07:30 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:07:14 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memccpy(void *dst, const void *src, INT32 c, size_t n)
{
	UINT8	*d;
	UINT8	*s;
	size_t	i;

	d = (UINT8 *)dst;
	s = (UINT8 *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == c)
			return (dst + (i + 1));
		++i;
	}
	return (0);
}
