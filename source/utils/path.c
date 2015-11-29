/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:11:26 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/28 17:56:17 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

char		*pathabsolute(const char *path)
{
	char	*ret;

	if (path[0] == '/')
		ret = ft_strdup(path);
	else
	{
		ret = ft_strnew(ft_strlen(path) + 1);
		ret[0] = '/';
		ret = ft_strcat(ret, path);
	}
	return (ret);
}

char		*pathlocal(const char *path)
{
	char	*ret;

	if (path[0] == '.' && path[1] == '/')
		ret = ft_strdup(path);
	else if (path[0] == '/')
	{
		ret = ft_strnew(ft_strlen(path) + 1);
		ret[0] = '.';
		ret = ft_strcat(ret, path);
	}
	else
	{
		ret = ft_strnew(ft_strlen(path) + 2);
		ret[0] = '.';
		ret[1] = '/';
		ret = ft_strcat(ret, path);
	}
	return (ret);
}

char		*pathfile(const INT8 *path, const INT8 *file)
{
	UINT32	path_len;
	UINT32	file_len;
	INT8	*ret;

	path_len = ft_strlen(path);
	file_len = ft_strlen(file);
	ret = ft_strnew(path_len + file_len + 1);
	ret = ft_strcpy(ret, path);
	ret = ft_strcat(ret, file);
	return (ret);
}
