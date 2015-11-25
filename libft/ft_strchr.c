/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:09:06 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:10:45 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strchr(const INT8 *s, INT32 c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return ((INT8 *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == c)
			return ((INT8 *)s + i);
		++i;
	}
	return (NULL);
}
