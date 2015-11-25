/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufferseg_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:00:39 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 21:34:24 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bufferseg_free(t_bufferseg **bs)
{
	if (bs != NULL && *bs != NULL)
	{
		ft_bufferseg_clear(*bs);
		free(*bs);
		*bs = NULL;
		bs = NULL;
	}
}
