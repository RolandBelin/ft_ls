/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:59:54 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:20:29 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_array_free(void ***ar, BOOL alsodata)
{
	int		m;

	if (ar && *ar)
	{
		m = ft_array_size(*ar);
		while (--m >= 0)
		{
			if ((*ar)[m] && alsodata)
				free((*ar)[m]);
			(*ar)[m] = NULL;
		}
		free(*ar);
		*ar = NULL;
		ar = NULL;
	}
}
