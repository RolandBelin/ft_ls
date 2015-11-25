/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:08:47 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 00:12:37 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_stack_peek(t_stack *s)
{
	if (!ft_arraylist_isempty(s))
		return (s->array[s->count - 1]);
	return (NULL);
}
