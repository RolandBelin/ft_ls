/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:07:52 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:08:27 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memrchr(const void *s, INT32 c, size_t n)
{
	UINT8	*t;

	t = (UINT8 *)s;
	while (n > 0)
	{
		--n;
		if (t[n] == c)
			return ((void *)s + n);
	}
	return (NULL);
}
