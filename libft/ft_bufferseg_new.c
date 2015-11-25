/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_new.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:01:41 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 21:36:05 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_bufferseg		*ft_bufferseg_new(void)
{
	t_bufferseg	*bs;

	bs = NULL;
	if ((bs = (t_bufferseg *)malloc(sizeof(t_bufferseg))) != NULL)
		ft_bufferseg_clear(bs);
	return (bs);
}
