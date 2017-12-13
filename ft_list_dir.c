/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <acauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 10:36:33 by acauchy           #+#    #+#             */
/*   Updated: 2017/12/13 14:18:49 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	DIR				*dir;
	struct dirent	*subdir;
	if (argc != 2)
	{
		ft_putendl("usage: ./ft_list_dir <directory>");
		return (0);
	}
	else
	{
		dir = opendir(argv[1]);
		if (dir)
		{
			while ((subdir = readdir(dir)) != NULL)
			{
				ft_putendl(subdir->d_name);
			}
		}
		else
			perror(strerror(errno));
	}
	return (0);
}
