/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:08:53 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:12:43 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_stack_pop(t_stack *s)
{
	void	*data;

	data = NULL;
	if (!ft_arraylist_isempty(s))
	{
		data = s->array[s->count];
		s->array[s->count--] = NULL;
	}
	return (data);
}
