/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_tonstring.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:01:04 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 22:50:45 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8	*ft_buffer_tonstring(t_buffer *b, size_t n)
{
	if (!ft_arraylist_isempty(b) && n > 0)
		return (ft_aatona(ft_buffer_toarray(b), n));
	else
		return (ft_strnew(0));
}
