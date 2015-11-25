/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:11:02 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:20:15 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strtolower(INT8 *str)
{
	size_t	i;

	if (str && *str)
	{
		i = 0;
		while (str[i])
		{
			str[i] = ft_tolower(str[i]);
			++i;
		}
	}
	return (str);
}
