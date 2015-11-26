/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_segment_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 02:30:59 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 03:57:07 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

INT8		ft_mycmp(const INT8 *s1, const INT8 *s2)
{
	UINT32	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}

static BOOL		ft_linkedlist_presort(t_linkedlist *ll, UINT32 index)
{
	BOOL	mod;
	INT8	*current;
	INT8	*next;

	mod = FALSE;
	current = (INT8 *)ft_linkedlist_getat(ll, index);
	next = (INT8 *)ft_linkedlist_getat(ll, index + 1);
	if (next)
	{
		if (ft_mycmp(current, next) > 0)
		{
			mod = TRUE;
			ft_linkedlist_setat(ll, current, index + 1);
			ft_linkedlist_setat(ll, next, index);
		}
		if (ft_linkedlist_presort(ll, index + 1))
			mod = TRUE;
	}
	return (mod);
}

void		ft_linkedlist_sort(t_linkedlist *ll)
{
	while(ft_linkedlist_presort(ll, 0))
		;
}
