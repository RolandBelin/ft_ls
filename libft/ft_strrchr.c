/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:31 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:17:09 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strrchr(const INT8 *s, INT32 c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((INT8 *)s + i);
	while (i > 0)
	{
		--i;
		if (s[i] == c)
			return ((INT8 *)s + i);
	}
	return (NULL);
}
