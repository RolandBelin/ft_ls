/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_setnext.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:54:58 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:54:58 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_segment		*ft_segment_setnext(t_segment *seg, t_segment *next)
{
	if (seg != NULL)
		seg->next = next;
	return (seg);
}
