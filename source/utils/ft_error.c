/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:36:18 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 01:54:53 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

void		ft_error(const char *data)
{
	char	*temp;

	temp = NULL;
	temp = ft_strnew(ft_strlen(data) + 4);
	temp = ft_strcpy(temp, "ls: ");
	temp = ft_strcat(temp, data);
	perror(temp);
	ft_strdel(&temp);
}
