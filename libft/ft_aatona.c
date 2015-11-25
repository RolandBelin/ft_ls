/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aatona.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:02:22 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:27:43 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static size_t	ft_calcullen(INT8 **ar)
{
	size_t		nb;
	size_t		total;

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

static BOOL		ft_myadd(INT8 *ar, INT8 *str, size_t len, size_t max)
{
	size_t		a;

	a = 0;
	if (len > max)
	{
		a = ft_strlen(ar);
		a = a - (len - max);
		str = ft_strncat(str, ar, a);
		return (FALSE);
	}
	else
		str = ft_strcat(str, ar);
	return (TRUE);
}

INT8			*ft_aatona(INT8 **ar, size_t max)
{
	size_t		len;
	size_t		n;
	INT8		*ret;

	n = 0;
	ret = NULL;
	len = ft_calcullen(ar);
	len = (len > max) ? max : len;
	if (ar && *ar && (ret = ft_strnew(len)) != NULL && max > 0)
	{
		len = 0;
		while (ar[n])
		{
			len = len + ft_strlen(ar[n]);
			if (!ft_myadd(ar[n], ret, len, max))
				break ;
			++n;
		}
	}
	else
		ret = ft_strnew(0);
	return (ret);
}
