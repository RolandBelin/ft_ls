/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:56 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:20:02 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strsub(const INT8 *str, UINT32 start, size_t len)
{
	INT8	*sub;

	if (!str)
		return (NULL);
	sub = ft_strnew(len);
	sub = ft_strncpy(sub, str + start, len);
	return (sub);
}
