/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:07:34 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:07:39 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memchr(const void *s, INT32 c, size_t n)
{
	UINT8	*t;
	size_t	i;

	i = 0;
	t = (UINT8 *)s;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (t[i] == (UINT8)c)
			return ((void *)s + i);
		++i;
	}
	return (NULL);
}
