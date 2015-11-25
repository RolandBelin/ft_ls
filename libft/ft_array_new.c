/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:59:35 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 18:12:45 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		**ft_array_new(size_t n)
{
	void	**ar;
	size_t	i;

	i = 0;
	ar = NULL;
	if ((ar = (void **)malloc(sizeof(void *) * n + 1)) != NULL)
	{
		while (i <= n)
			ar[i++] = (void *)NULL;
	}
	return (ar);
}
