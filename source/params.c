/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pms.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 06:36:30 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/28 18:01:40 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

static void	flagcheckstr(t_params *pms, INT8 *flag)
{
	UINT32		i;
	UINT8		n;

	n = 0;
	i = 0;
	if (flag[0] == '\0')
		ft_arraylist_add(pms->input, flag - 1);
	else if (flag[0] == '-')
		pms->nextisfile = TRUE;
	if (flag[0] == '-' && !flag[1])
		return ;
	while (flag[i])
	{
		if (!ft_strchr(FLAG_CHAR, flag[i]))
			ft_ferror(flag[i]);
		if (ft_strchr(pms->flags, flag[i]))
		{
			n = ft_strlen(pms->flags);
			pms->flags[n] = flag[i];
		}
		++i;
	}
}

static void	pmscheck(t_params *pms, INT8 **array)
{
	UINT8	i;

	i = 0;
	while (array[i])
	{
		if (array[i][0] == '-' && !pms->nextisfile)
			flagcheckstr(pms, &array[i][1]);
		else
			ft_arraylist_add(pms->input, array[i]);
		++i;
	}
}

t_params	*params(INT32 ac, INT8 **av)
{
	t_params	*pms;
	BOOL		ok;

	ok = FALSE;
	if ((pms = (t_params *)malloc(sizeof(t_params))) != NULL)
	{
		if ((pms->input = ft_arraylist_new()) != NULL &&
			(pms->flags = ft_strnew(FLAG_SIZE)) != NULL)
			ok = TRUE;
	}
	if (ok)
	{
		pms->nextisfile = FALSE;
		pmscheck(pms, av + 1);
	}
	else
		ft_merror("t_params structure");
	return (pms);
}
