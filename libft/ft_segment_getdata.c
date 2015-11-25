/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_getdata.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:25 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:54:26 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			*ft_segment_getdata(t_segment *seg)
{
	if (seg != NULL)
		return (seg->data);
	else
		return (NULL);
}
