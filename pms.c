/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pms.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 06:36:30 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/25 07:10:45 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

static void		flagcheckchar(INT8 flag)
{
	if (ft_strchr(FLAG_CHAR, flag))
		return ;
	ft_putstr("ls: illegal option -- ");
	ft_putchar(flag);
	ft_putstr("\nusage: ls [-");
	ft_putstr(FLAG_CHAR);
	ft_putstr("[file ...]\n");
	exit(1);
}

static void		flagcheckstr(t_pms *pms, INT8 *flag)
{
	UINT32		i;
	UINT8		n;

	n = 0;
	i = 1;
	if (flag[0] == '\0')
		ft_arraylist_add(pms->input, flag - 1);
	else if (flag[0] == '-' && flag[1] == '\0')
		pms->nextisfile = TRUE;
	else
	{
		while (flag[i])
		{
			flagcheckchar(flag[i]);
			if (ft_strchr(pms->flags, flag[i]))
			{
				n = ft_strlen(pms->flags);
				pms->flags[n] = flag[i];
			}
			++i;
		}
	}
}

static void	pmscheck(t_pms *pms, INT8 **array)
{
	UINT8	i;

	i = 0;
	while (array[i])
	{
		if (array[i][0] == '-' && !pms->nextisfile)
			flagcheckstr(pms, &array[i][1]);
		else
			ft_arraylist_add(pms->input, &array[i]);
		++i;
	}
}

void		pms(INT32 ac, INT8 **array)
{
	t_pms	*pms;

	pms = NULL;
	pms = (t_pms *)malloc(sizeof(t_pms));
	if (pms)
	{
		pms->input = ft_arraylist_new();
		pms->flags = ft_strnew(FLAG_SIZE);
		pms->nextisfile = FALSE;
		pms->exec = ft_strdup(array[0]);
		pmscheck(pms, array + 1);
	}
	else
	{
		ft_putstr("ls: Malloc for params error, malloc returned null.\n");
		exit(1);
	}
}
