/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_tostr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:01:52 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:58:42 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_bufferseg_tostr(t_bufferseg *bs)
{
	INT8	*ret;
	UINT8	i;

	i = 0;
	ret = NULL;
	if (bs)
	{
		ret = ft_strnew(bs->len);
		while (i < bs->len)
		{
			ret[i] = bs->data[i];
			++i;
		}
	}
	return (ret);
}
