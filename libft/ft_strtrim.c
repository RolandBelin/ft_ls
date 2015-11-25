/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:11:13 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:20:42 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strtrim(const INT8 *s)
{
	size_t	len;

	if (s)
	{
		while (*s && (*s == '\t' || *s == '\n' || *s == ' '))
			++s;
		if (*s)
		{
			len = ft_strlen(s) - 1;
			while ((s[len] == ' ' || s[len] == '\t' || s[len] == '\n') && len)
				--len;
			return (ft_strsub(s, 0, len + 1));
		}
	}
	return (ft_strdup(""));
}
