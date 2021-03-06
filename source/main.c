/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 03:10:14 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/28 21:15:47 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

void		pp(t_file *f)
{
	UINT32	i;
	t_file	*act;

	i = 0;
	while ((act = (t_file *)ft_arraylist_get(f->content, i)) != NULL)
	{
		ft_putstr(act->name);
		++i;
	}
}

INT32		main(INT32 ac, INT8 **av)
{
	t_file		*file;
	
	file = file_get("./", "includes/");
	file_content(file, FALSE);
	return (0);
}
