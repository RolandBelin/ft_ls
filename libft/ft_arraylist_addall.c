/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_addall.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:51:19 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:20:52 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL		ft_arraylist_addall(t_arraylist *al, void **datas)
{
	size_t	i;

	i = 0;
	if (datas)
	{
		while (datas[i])
		{
			if ((ft_arraylist_add(al, datas[i++])) == FALSE)
				return (FALSE);
		}
	}
	return (TRUE);
}
