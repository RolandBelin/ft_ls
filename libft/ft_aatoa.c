/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aatoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:02:16 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 01:53:39 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static size_t	ft_calcullen(INT8 **ar)
{
	size_t	nb;
	size_t	total;

	total = 0;
	nb = 0;
	if (ar && *ar)
	{
		while (ar[nb])
		{
			total = total + ft_strlen(ar[nb]);
			++nb;
		}
	}
	return (nb);
}

INT8			*ft_aatoa(INT8 **ar)
{
	size_t	n;
	INT8	*ret;

	n = 0;
	if (ar && *ar && (ret = ft_strnew(ft_calcullen(ar))) != NULL)
	{
		while (ar[n])
		{
			ret = ft_strcat(ret, ar[n]);
			++n;
		}
	}
	else
		ret = ft_strnew(0);
	return (ret);
}
