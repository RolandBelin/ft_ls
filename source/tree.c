/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 00:51:03 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 01:53:46 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

static t_tree		*treeinit(const INT8 *path)
{
	t_tree	*t;

	t = (t_tree *)malloc(sizeof(t_tree));
	if (t)
	{
		t->contentname = ft_linkedlist_new();
		t->path = path;
	}
	return (t);
}

void				treefree(t_tree **t)
{
	if (t && *t)
	{
		ft_linkedlist_free(&(t[0]->contentname), TRUE);
		free(*t);
		t = NULL;
	}
}

t_tree				*tree(const INT8 *path, t_pms *pms)
{
	BOOL			a;
	t_tree			*tree;
	DIR				*dir;
	struct dirent	*reader;

	tree = NULL;
	a = ((ft_strchr(pms->flags, 'a')) ? TRUE : FALSE);
	if ((dir = opendir(path)) != NULL)
	{
		tree = treeinit(path);
		while ((reader = readdir(dir)) != NULL)
		{
			if (a || reader->d_name[0] != '.')
				ft_linkedlist_addlast(tree->contentname, reader->d_name);
		}
		closedir(dir);
	}
	else
		ft_error(path);
	return (tree);
}

void			treestat(t_tree *t)
{
	UINT32		i;
	INT8		*name;

	name = NULL;
	i = 0;
	t->contentstat = ft_linkedlist_new();
	while (ft_linkedlist_containindex(t->contentname, i))
	{
		name = (INT8 *)ft_linkedlist_getat(t->contentname, i);
		filestat(t->path, name, t->contentstat);
		++i;
	}
}
