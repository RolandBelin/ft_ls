/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_get.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:30 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:13:11 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			*ft_arraylist_get(t_arraylist *al, size_t index)
{
	if (al != NULL && al->count > index)
		return (al->array[index]);
	return (NULL);
}
