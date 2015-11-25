/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:02:38 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:02:35 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT64		ft_atol(const INT8 *nptr)
{
	INT64	nbr;
	INT64	sign;

	sign = 1;
	nbr = 0;
	while (ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '+' || *nptr == '-')
		++nptr;
	while (ft_isdigit(*nptr))
	{
		nbr = nbr * 10 + (*nptr - 48);
		++nptr;
	}
	return (nbr * sign);
}
