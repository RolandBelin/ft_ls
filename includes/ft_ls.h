/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 03:02:46 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 11:19:51 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include <libft.h>
# include <dirent.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <errno.h>

# define FLAG_SIZE 5
# define FLAG_CHAR "arRlt"

typedef struct		s_tree
{
	const INT8		*path;
	t_linkedlist	*contentname;
	t_linkedlist	*contentstat;
}					t_tree;

typedef struct		s_pms
{
	t_linkedlist	*inputname;
	t_linkedlist	*inputstat;
	INT8			*flags;
	BOOL			nextisfile;
}					t_pms;

/* Params */
t_pms				*params(INT32 ac, INT8 **av);

// Tree */
t_tree				*tree(const INT8 *path, t_pms *pms);
void				treefree(t_tree **t);

/* Print */
void				printchmod(struct stat sb);

void				ft_linkedlist_swap(t_linkedlist **ll);

/* Utils */
void				ft_linkedlist_sort(t_linkedlist *ll);
void				filestat(const INT8 *path, const INT8 *file,
		t_linkedlist *ll);
void				ft_error(const INT8 *data);
INT8				*pathfile(const INT8 *path, const INT8 *file);
INT8				*pathlocal(const INT8 *path);
INT8				*pathabsolute(const INT8 *path);
#endif
