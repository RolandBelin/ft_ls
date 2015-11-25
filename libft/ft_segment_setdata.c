/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_setdata.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:47 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:54:49 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_segment	*ft_segment_setdata(t_segment *seg, void *data)
{
	if (seg != NULL)
		seg->data = data;
	return (seg);
}
