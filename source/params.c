/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pms.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 06:36:30 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/26 02:05:53 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

static void	flagcheckchar(INT8 flag)
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

static void	flagcheckstr(t_pms *pms, INT8 *flag)
{
	UINT32		i;
	UINT8		n;

	n = 0;
	i = 0;
	if (flag[0] == '\0')
		ft_linkedlist_addlast(pms->inputname, flag - 1);
	else if (flag[0] == '-')
		pms->nextisfile = TRUE;
	if (flag[0] == '-' && !flag[1])
		return ;
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

static void	pmscheck(t_pms *pms, INT8 **array)
{
	UINT8	i;

	i = 0;
	while (array[i])
	{
		if (array[i][0] == '-' && !pms->nextisfile)
			flagcheckstr(pms, &array[i][1]);
		else
			ft_linkedlist_addlast(pms->inputname, array[i]);
		++i;
	}
}

void		paramsstat(t_pms *pms)
{
	UINT32	i;
	INT8	*name;

	i = 0;
	name = NULL;
	pms->inputstat = ft_linkedlist_new();
	while (ft_linkedlist_containindex(pms->inputname, i))
	{
		name = (INT8 *)ft_linkedlist_getat(pms->inputname, i);
		filestat("", name, pms->inputstat);
	}
}

t_pms		*params(INT32 ac, INT8 **av)
{
	t_pms	*pms;

	pms = NULL;
	pms = (t_pms *)malloc(sizeof(t_pms));
	if (pms)
	{
		pms->inputname = ft_linkedlist_new();
		pms->flags = ft_strnew(FLAG_SIZE);
		pms->nextisfile = FALSE;
		pmscheck(pms, av + 1);
	}
	else
	{
		ft_putstr("ls: Malloc for params error, malloc returned null.\n");
		exit(1);
	}
	return (pms);
}
