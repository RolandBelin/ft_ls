/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:36:18 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/28 17:56:39 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

void		ft_perror(const INT8 *data)
{
	INT8	*temp;

	temp = NULL;
	temp = ft_strnew(ft_strlen(data) + 4);
	temp = ft_strcpy(temp, "ls: ");
	temp = ft_strcat(temp, data);
	perror(temp);
	ft_strdel(&temp);
}

void		ft_ferror(INT8 flag)
{
	ft_putstr("ls: illegal option --");
	ft_putchar(flag);
	ft_putstr("\nusage: ls [-");
	ft_putstr(FLAG_CHAR);
	ft_putstr(" [file ...]\n");
	exit(1);
}

void		ft_merror(const INT8 *data)
{
	ft_putstr("ls: ");
	ft_putstr(data);
	ft_putstr(": Malloc error.\n");
	exit(2);
}
