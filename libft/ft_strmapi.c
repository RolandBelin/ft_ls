/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:03 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:57:23 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	INT8	*dup;
	int		i;

	dup = NULL;
	i = 0;
	if (s && f)
	{
		dup = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			dup[i] = (*f)(i, s[i]);
			++i;
		}
	}
	return (dup);
}
