/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:09:03 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:10:18 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strcat(INT8 *dst, const INT8 *src)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	while (src[j])
	{
		dst[i + j] = src[j];
		++j;
	}
	dst[i + j] = '\0';
	return (dst);
}
