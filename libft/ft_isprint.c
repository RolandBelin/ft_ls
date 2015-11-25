/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:04:44 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:57:53 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT32		ft_isprint(INT32 c)
{
	if ((ft_isgraph(c) || c == ' ') && c > 0)
		return (16384);
	else
		return (0);
}