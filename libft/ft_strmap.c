/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:00 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:58:15 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strmap(const INT8 *s, INT8 (*f)(INT8))
{
	INT8	*dup;
	size_t	i;

	dup = NULL;
	i = 0;
	if (s && f)
	{
		dup = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			dup[i] = (*f)(s[i]);
			++i;
		}
	}
	return (dup);
}
