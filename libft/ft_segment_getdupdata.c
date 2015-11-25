/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_getdupdata.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:30 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:54:31 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_segment_getdupdata(t_segment *seg)
{
	size_t	len;
	UINT8	*dest;
	UINT8	*src;

	dest = NULL;
	src = NULL;
	len = 0;
	if ((src = (UINT8 *)ft_segment_getdata(seg)) != NULL)
	{
		while (src[len] != '\0')
			++len;
		if ((dest = (UINT8 *)malloc(sizeof(UINT8) * (len + 1))))
		{
			len = 0;
			while (src[len] != '\0')
			{
				dest[len] = src[len];
				++len;
			}
			dest[len] = '\0';
		}
	}
	return (dest);
}
