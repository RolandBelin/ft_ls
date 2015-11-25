/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:07:39 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:46:37 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	UINT8	*p1;
	UINT8	*p2;
	size_t	i;

	i = 0;
	p1 = (UINT8 *)s1;
	p2 = (UINT8 *)s2;
	while (p1[i] && p2[i] && p1[i] == p2[i] && i < n)
		++i;
	return (p1[i] - p2[i]);
}
