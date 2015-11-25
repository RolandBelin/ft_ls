/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:51 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:19:41 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strstr(const INT8 *s1, const INT8 *s2)
{
	size_t	i;
	size_t	size_s2;

	i = 0;
	if (s1 && s2)
	{
		size_s2 = ft_strlen(s2);
		while (s1[i])
		{
			if (ft_strncmp(s1 + i, s2, size_s2) == 0)
				return ((INT8 *)s1 + i);
			++i;
		}
		if (size_s2 == 0)
			return ((INT8 *)s1 + i);
	}
	return (NULL);
}
