/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:09:53 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:13:30 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strlcat(INT8 *dst, const INT8 *src, size_t dstsize)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	i;

	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	if ((dstsize - 1) <= s_dst)
		return (s_src + dstsize);
	i = 0;
	while (s_dst + i < dstsize - 1)
	{
		dst[s_dst + i] = src[i];
		++i;
	}
	dst[s_dst + i] = '\0';
	return (s_dst + s_src);
}
