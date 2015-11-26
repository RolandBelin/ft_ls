/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 01:31:38 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 01:47:10 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

void			filestat(const char *path, const char *name, t_linkedlist *ll)
{
	char		*fullpath;
	INT32		statret;
	struct stat	*ret;

	fullpath = pathfile(path, name);
	statret = stat(fullpath, ret);
	if (statret == -1)
		ft_error(fullpath);
	else
		ft_linkedlist_addlast(ll, ret);
	ft_strdel(&fullpath);
}
