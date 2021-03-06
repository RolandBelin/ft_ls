/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:04:11 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:54:27 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT32		ft_isblank(INT32 c)
{
	if (c == ' ' || c == '\t' || c == 264 || c == 266 || c == 280 ||
			c == 290 || c == 296)
		return (1);
	else
		return (0);
}
