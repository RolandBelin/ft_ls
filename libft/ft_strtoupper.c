/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:11:09 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:20:29 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strtoupper(INT8 *str)
{
	size_t	i;

	if (str && *str)
	{
		i = 0;
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			++i;
		}
	}
	return (str);
}
