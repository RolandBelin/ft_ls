/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:02:42 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 18:02:43 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

long long		ft_atoll(const char *nptr)
{
	long long	nbr;
	long long	sign;

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
