/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:07:42 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 21:53:14 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	UINT8	*d;
	UINT8	*s;

	d = (UINT8 *)dst;
	s = (UINT8 *)src;
	while (n > 0)
	{
		--n;
		d[n] = s[n];
	}
	return (dst);
}
