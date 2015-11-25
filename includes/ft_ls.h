/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 03:02:46 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 07:12:00 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include <libft.h>
# include <dirent.h>
# include <stdlib.h>

# define FLAG_SIZE 5
# define FLAG_CHAR "arRlt"

typedef struct		s_pms
{
	INT8			*exec;
	t_arraylist		*input;
	INT8 			*flags;
	BOOL 			nextisfile;
}					t_pms;

#endif
