/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:34 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:18:50 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static size_t		ft_strsplit_listlen(const INT8 *s, INT8 c)
{
	UINT32			inner;
	UINT32			i;
	size_t			len;

	inner = 0;
	i = 0;
	len = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] == c)
				inner = 0;
			if (s[i] != c && inner == 0)
			{
				inner = 1;
				++len;
			}
			++i;
		}
	}
	return (len);
}

static size_t		ft_len(const INT8 *s, INT8 c)
{
	size_t			len;

	len = 0;
	while (s[len] != c && s[len])
		++len;
	return (len);
}

INT8				**ft_strsplit(const INT8 *s, INT8 c)
{
	INT8			**list;
	size_t			len;
	INT32			i;

	i = 0;
	len = ft_strsplit_listlen(s, c);
	list = (INT8 **)malloc(sizeof(INT8 *) * (len + 1));
	if (list && len)
	{
		while (len)
		{
			--len;
			while (*s == c && *s)
				++s;
			list[i] = ft_strsub(s, 0, ft_len(s, c));
			if (!list[i])
				return (NULL);
			s = s + ft_len(s, c);
			++i;
		}
		list[i] = NULL;
	}
	return (list);
}
