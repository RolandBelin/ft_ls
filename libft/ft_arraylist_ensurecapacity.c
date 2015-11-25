/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_ensurecapacity.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:51:44 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:21:19 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL		ft_arraylist_ensurecapacity(t_arraylist *al, size_t min)
{
	if (al->capacity > min)
		return (TRUE);
	else if (ft_array_resize(&al->array, (((al->capacity * 3) / 2) + 1)))
	{
		al->capacity = (((al->capacity * 3) / 2) + 1);
		return (TRUE);
	}
	else
		return (FALSE);
}
