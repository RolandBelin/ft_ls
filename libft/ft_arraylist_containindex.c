/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_containindex.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:51:35 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:21:13 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL		ft_arraylist_containindex(t_arraylist *al, size_t index)
{
	if (al && al->count > index)
		return (TRUE);
	return (FALSE);
}
