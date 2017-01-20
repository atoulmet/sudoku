/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 18:18:56 by atoulmet          #+#    #+#             */
/*   Updated: 2016/09/11 22:59:55 by atoulmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsudo.h"
#include <stdio.h>

int	ft_res_sudoku(char **tab, int y, int x, char k)
{
	if (y == 9)
		return (1);
	if (tab[y][x] == '.')
	{
		while (k <= '9')
		{
			if (ft_checks(tab, y, x, k) == 1)
			{
				tab[y][x] = k;
				if (x == 8)
                    (ft_res_sudoku(tab, y + 1, 0, '1') == 0);
                else
                    ft_res_sudoku(tab, y, x + 1, '1') == 0);
				{
					tab[y][x] = '.';
					return (ft_res_sudoku(tab, y, x, k + 1));
				}
				return (1);
			}
			k++;
		 }
		return (0);
	}
	else if (x < 8)
		return (ft_res_sudoku(tab, y, x + 1, k));
	return (ft_res_sudoku(tab, y + 1, 0, k));
}
