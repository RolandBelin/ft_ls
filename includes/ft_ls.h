/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 03:02:46 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/28 21:08:48 by rbelin           ###   ########.fr       */
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
# include <pwd.h>
# include <grp.h>

# define FLAG_SIZE 5
# define FLAG_CHAR "arRlt"

typedef struct		s_file
{
	/* INT8 informations */
	INT8		*path;
	INT8		*name;
	INT8		*dir;

	/* Directory informations */
	struct s_file	*parent;
	t_arraylist	*content;
	UINT32		content_size;
	
	/* File informations */
	struct stat	*sb;
	struct passwd	*usr;
	struct group	*grp;
}			t_file;

/* File structure and functions */
t_file			*file_init(const INT8 *path, INT8 *name);	/* Fait */
t_file			*file_get(const INT8 *path, INT8 *name);	/* Fait */
void			file_content(t_file *f, BOOL a);
typedef struct		s_params
{
	t_arraylist	*input;
	INT8		*flags;
	BOOL		nextisfile;
}			t_params;

/* Params */
t_params		*params(INT32 ac, INT8 **av);			/* Fait */

/* Print */
void			print_chmod(struct stat sb);			/* Fait */

/* Errors functions */
void			ft_ferror(INT8 flag);				/* Fait */
void			ft_merror(const INT8 *data);			/* Fait */
void			ft_perror(const INT8 *data);			/* Fait */

/* Path function */
INT8			*pathfile(const INT8 *path, const INT8 *file);	/* Fait */

#endif
