/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:02:46 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:03:18 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static size_t	ft_itoa_intlen(INT64 nbr)
{
	size_t		len;

	len = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		++len;
	}
	while (nbr > 10)
	{
		nbr = nbr / 10;
		++len;
	}
	return (len);
}

INT8			*ft_itoa(INT32 n)
{
	INT8		*ret;
	size_t		len;
	INT64		nbr;

	nbr = n;
	len = ft_itoa_intlen(nbr);
	ret = (INT8 *)malloc(sizeof(INT8) * (len + 1));
	if (ret)
	{
		ret[len] = '\0';
		if (nbr < 0)
			nbr = -nbr;
		while (len)
		{
			--len;
			ret[len] = 48 + nbr - ((nbr / 10) * 10);
			nbr = nbr / 10;
		}
		if (ret[0] == '0' && ret[1] != '\0')
			ret[0] = '-';
	}
	return (ret);
}
