/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:59:11 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 19:41:33 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		**ft_array_dup(void **ar)
{
	void	**dup;
	size_t	sar;
	size_t	i;

	i = 0;
	dup = NULL;
	sar = 0;
	if (ar && (dup = (void **)malloc(sizeof(void *) * (sar + 1))) != NULL)
	{
		sar = ft_array_size(ar);
		while (i < sar)
		{
			dup[i] = ar[i];
			++i;
		}
		dup[i] = NULL;
	}
	return (dup);
}
