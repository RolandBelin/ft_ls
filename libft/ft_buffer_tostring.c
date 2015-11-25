/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer_tostring.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:00:17 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:27:16 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void				ft_myfree(char ***tab)
{
	size_t			i;

	i = 0;
	while (tab[0][i])
	{
		free(tab[0][i]);
		tab[0][i] = NULL;
		++i;
	}
	free(tab[0]);
	tab[0] = NULL;
	tab = NULL;
}

INT8				*ft_buffer_tostring(t_buffer *b)
{
	INT8	**tab;
	INT8	*ret;

	tab = NULL;
	ret = NULL;
	if (!ft_arraylist_isempty(b))
	{
		tab = ft_buffer_toarray(b);
		ret = ft_aatoa(tab);
		ft_myfree(&tab);
		return (ret);
	}
	else
		return (ft_strnew(0));
}
