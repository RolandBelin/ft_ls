/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 03:10:14 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 11:32:45 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

void		pll(t_linkedlist *ll)
{
	UINT32	i;

	i = 0;
	while (ft_linkedlist_containindex(ll, i))
	{
		printf("%s\n", (INT8 *)ft_linkedlist_getat(ll, i));
		++i;
	}
}	

INT32		main(INT32 ac, INT8 **av)
{
	t_linkedlist	*ll;
	
	ll = ft_linkedlist_new();
	ft_linkedlist_addlast(ll, "a");
	
	ft_linkedlist_swap(&ll);
	pll(ll);
	return (0);
}
