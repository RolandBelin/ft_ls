/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_newn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:03:43 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:03:39 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_arraylist		*ft_arraylist_newn(size_t n)
{
	size_t		s;
	t_arraylist	*al;

	s = (n > 10) ? n : 10;
	if ((al = (t_arraylist *)malloc(sizeof(t_arraylist))) != NULL)
	{
		al->count = 0;
		al->capacity = s;
		if ((al->array = ft_array_new(s)) != NULL)
			return (al);
	}
	return (NULL);
}
