/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_clear.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 21:36:22 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 21:36:23 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bufferseg_clear(t_bufferseg *bs)
{
	if (bs != NULL)
	{
		bs->len = 0;
		while (bs->len < 32)
		{
			bs->data[bs->len] = '\0';
			bs->len++;
		}
		bs->len = 0;
	}
}
