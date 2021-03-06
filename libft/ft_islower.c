/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:04:40 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:57:40 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT32		ft_islower(INT32 c)
{
	if (c >= 'a' && c <= 'z')
		return (512);
	else
		return (0);
}
