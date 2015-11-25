/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:04:37 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:55:12 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT32		ft_isgraph(INT32 c)
{
	if ((ft_isalnum(c) || ft_ispunct(c)) && c != 262 && c != 266 && c != 272 &&
			c != 274 && c != 280 && c != 286 && c != 290 && c != 296)
		return (32768);
	else
		return (0);
}