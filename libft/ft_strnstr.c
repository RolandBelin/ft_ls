/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:27 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:16:40 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strnstr(const INT8 *s1, const INT8 *s2, size_t n)
{
	size_t	i;
	size_t	size_s2;

	i = 0;
	if (s1 && s2)
	{
		size_s2 = ft_strlen(s2);
		while (s1[i] && (i + size_s2) < n)
		{
			if (ft_strncmp(s1 + i, s2, size_s2) == 0)
				return ((INT8 *)s1 + i);
			++i;
		}
		if (size_s2 == 0 && i < n)
			return ((INT8 *)s1 + i);
	}
	return (NULL);
}
