/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoaa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:02:30 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:01:44 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static size_t	ft_atoaa_size(const INT8 *str, size_t cut, size_t slen)
{
	size_t		nb;

	nb = 0;
	if (str && *str)
	{
		nb = 1;
		while ((INT32)slen - (INT32)cut > 0)
		{
			slen = slen - cut;
			++nb;
		}
	}
	return (nb);
}

static INT8		*ft_mysub(const INT8 *str, size_t cut, size_t nb, size_t slen)
{
	size_t		start;
	size_t		len;

	start = cut * nb;
	len = (slen - start >= cut ? cut : (slen - start));
	return (ft_strsub(str, start, len));
}

INT8			**ft_atoaa(const INT8 *str, size_t cut)
{
	INT8		**ret;
	size_t		total;
	size_t		nb;
	size_t		slen;

	nb = 0;
	ret = NULL;
	if (str != NULL && cut > 0)
	{
		slen = ft_strlen(str);
		total = ft_atoaa_size(str, cut, slen);
		if ((ret = (INT8 **)ft_array_new(total)) != NULL)
		{
			ret = (INT8 **)ft_array_new(total);
			while (nb < total)
			{
				ret[nb] = ft_mysub(str, cut, nb, slen);
				++nb;
			}
		}
	}
	return (ret);
}
