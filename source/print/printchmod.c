/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printchmod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 23:45:07 by rbelin            #+#    #+#             */
/*   Updated: 2015/11/28 14:46:37 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

static void		type(struct stat sb)
{
	if (S_ISDIR(sb.st_mode))
		ft_putchar('d');
	else if (S_ISLNK(sb.st_mode))
		ft_putchar('l');
	else
		ft_putchar('-');
}

static void		usr(struct stat sb)
{
	if (sb.st_mode & S_IRUSR)
		ft_putchar('r');
	else
		ft_putchar('-');
	if (sb.st_mode & S_IWUSR)
		ft_putchar('w');
	else
		ft_putchar('-');
	if (sb.st_mode & S_IXUSR)
		ft_putchar('x');
	else
		ft_putchar('-');
}

static void		grp(struct stat sb)
{
	if (sb.st_mode & S_IRGRP)
		ft_putchar('r');
	else
		ft_putchar('-');
	if (sb.st_mode & S_IWGRP)
		ft_putchar('w');
	else
		ft_putchar('-');
	if (sb.st_mode & S_IXGRP)
		ft_putchar('x');
	else
		ft_putchar('-');
}

static void		oth(struct stat sb)
{
	if (sb.st_mode & S_IROTH)
		ft_putchar('r');
	else
		ft_putchar('-');
	if (sb.st_mode & S_IWOTH)
		ft_putchar('w');
	else
		ft_putchar('-');
	if (sb.st_mode & S_IXOTH)
		ft_putchar('x');
	else
		ft_putchar('-');
}

void			printchmod(struct stat sb)
{
	type(sb);
	usr(sb);
	grp(sb);
	oth(sb);
}
