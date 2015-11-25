/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_set.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:50 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:03:51 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_arraylist_set(t_arraylist *al, size_t index, void *data)
{
	void	*old_data;

	old_data = NULL;
	if (al != NULL && index < al->count)
	{
		old_data = al->array[index];
		al->array[index] = data;
	}
	return (old_data);
}
