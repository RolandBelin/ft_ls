/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_isempty.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:51:52 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:21:35 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL	ft_arraylist_isempty(t_arraylist *al)
{
	if (al == NULL)
		return (TRUE);
	else if (al->count == 0)
		return (TRUE);
	else
		return (FALSE);
}
