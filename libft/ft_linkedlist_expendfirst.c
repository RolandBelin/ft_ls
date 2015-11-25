/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_expendfirst.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:53:02 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:53:03 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_linkedlist_expendfirst(t_linkedlist *ll, size_t n)
{
	if (ll == NULL)
		return ;
	while (n > 0)
	{
		ft_linkedlist_addfirst(ll, NULL);
		--n;
	}
}
