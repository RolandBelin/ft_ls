/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_load.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:02:42 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/28 21:17:52 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

static BOOL		fileget_stat(t_file *f)
{
	struct stat	*sb;
	INT32		status;

	status = 0;
	if ((sb = (struct stat *)malloc(sizeof(struct stat))) != NULL)
	{
		if ((status = stat(f->path, sb)) == -1)
			ft_perror(f->path);
		else
		{
			f->sb = sb;
			f->usr = getpwuid(f->sb->st_uid);
			f->grp = getgrgid(f->sb->st_gid);
		}
	}
	else
		ft_merror("struct stat");
	return ((status < 0) ? FALSE : TRUE);
}

t_file			*file_get(const INT8 *path, INT8 *name)
{
	t_file		*f;

	f = file_init(path, name);
	printf("%s\n", name);
	fileget_stat(f);
	return (f);
}
