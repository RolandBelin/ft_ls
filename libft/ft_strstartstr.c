/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:10:46 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:28:07 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

BOOL		ft_strstartstr(const INT8 *str, const INT8 *start)
{
	size_t	i;

	i = 0;
	if ((!str && !start) || (!*str && !*start))
		return (TRUE);
	else if ((!str || !start) || (!*str || !*start))
		return (FALSE);
	while (str[i] && start[i] && str[i] == start[i])
		++i;
	if (start[i] == '\0')
		return (TRUE);
	else
		return (FALSE);
}
