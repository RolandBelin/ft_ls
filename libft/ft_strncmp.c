/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:12 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:33:15 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strncmp(const INT8 *s1, const INT8 *s2, size_t n)
{
	while (n)
	{
		--n;
		if (*s1 != *s2)
			return ((UINT8) * s1 - (UINT8) * s2);
		else if (!*s1 || !*s2)
			break ;
		++s1;
		++s2;
	}
	return (0);
}
