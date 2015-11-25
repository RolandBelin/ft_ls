/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:09:45 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/24 23:13:17 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

INT8		*ft_strjoin(const INT8 *s1, const INT8 *s2)
{
	INT8	*str;
	size_t	s_s1;
	size_t	s_s2;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	s_s1 = ft_strlen(s1);
	s_s2 = ft_strlen(s2);
	str = ft_strnew(s_s1 + s_s2);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
