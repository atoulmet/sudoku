/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 18:08:16 by atoulmet          #+#    #+#             */
/*   Updated: 2016/09/11 22:50:39 by atoulmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsudo.h"
#include <stdio.h>

int		ft_checkline(char **tab, int y, char value)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[y][i] == value)
			return (0);
		i++;
	}
	return (1);
}

int		ft_checkcolumn(char **tab, int x, char value)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (tab[j][x] == value)
			return (0);
		j++;
	}
	return (1);
}

int		ft_block(char **tab, int y, int x, char value)
{
	int blocktopx;
	int blocktopy;
	int i;
	int j;

	i = 0;
	blocktopy = y - (y % 3);
	while (i < 3)
	{
		j = 0;
		blocktopx = x - (x % 3);
		while (j < 3)
		{
			if (tab[blocktopy + j][blocktopx + i] == value)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_checks(char **tab, int y, int x, char value)
{
	if (ft_checkline(tab, y, value) && ft_checkcolumn(tab, x, value) &&
			ft_block(tab, y, x, value))
		return (1);
	return (0);
}
