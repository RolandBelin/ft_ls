/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_content.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 20:07:44 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/28 21:17:44 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

void			file_content(t_file *f, BOOL a)
{
	DIR		*dir;
	t_file		*fa;
	struct dirent	*r;

	if (!f->content && (f->content = ft_arraylist_new()) == NULL)
		ft_merror("File content");
	fa = NULL;
	if ((dir = opendir(f->path)) != NULL)
	{
		while ((r = readdir(dir)) != NULL)
		{
			if ((a || r->d_name[0] != '.') &&
				(fa = file_get(f->path, ft_strdup(r->d_name))) != NULL)
			{
				ft_arraylist_add(f->content, fa);
			}
		}
	}
}
