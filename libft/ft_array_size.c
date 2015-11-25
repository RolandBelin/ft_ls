/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:59:42 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 17:59:45 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_array_size(void **ar)
{
	size_t ret;

	ret = 0;
	if (ar != NULL)
	{
		while (ar[ret])
			++ret;
	}
	return (ret);
}
