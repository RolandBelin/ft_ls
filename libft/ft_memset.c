/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:07:55 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:25:59 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memset(void *s, INT32 c, size_t n)
{
	UINT8	*t;

	t = (UINT8 *)s;
	while (n > 0)
	{
		--n;
		t[n] = (UINT8)c;
	}
	s = (void *)t;
	return (s);
}