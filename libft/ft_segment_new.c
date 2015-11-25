/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:06:56 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 18:06:56 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_segment		*ft_segment_new(void)
{
	t_segment	*new_seg;

	new_seg = NULL;
	if ((new_seg = (t_segment *)malloc(sizeof(t_segment))) != NULL)
	{
		new_seg->data = NULL;
		new_seg->next = NULL;
		new_seg->back = NULL;
	}
	return (new_seg);
}
