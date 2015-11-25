/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_setback.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:35 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:54:36 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_segment		*ft_segment_setback(t_segment *seg, t_segment *back)
{
	if (seg != NULL)
		seg->back = back;
	return (seg);
}
