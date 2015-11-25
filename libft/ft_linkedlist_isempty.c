/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_isempty.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:53:53 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:23:07 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL	ft_linkedlist_isempty(t_linkedlist *ll)
{
	if (ll == NULL || ll->count == 0)
		return (TRUE);
	return (FALSE);
}
