/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:09:11 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:11:22 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strcmp(const INT8 *s1, const INT8 *s2)
{
	size_t	n;

	n = 0;
	while (s1[n] && s2[n] && s1[n] == s2[n])
		++n;
	return ((UINT8)s1[n] - (UINT8)s2[n]);
}