/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:57:08 by atoulmet          #+#    #+#             */
/*   Updated: 2016/09/11 23:11:29 by atoulmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsudo.h"
#include <unistd.h>

int		check_lines(char **argv)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (argv[a])
	{
		while (argv[a][b])
		{
			if ((argv[a][b] >= 49 && argv[a][b] <= 57) || argv[a][b] == 46)
				b++;
			else
				return (0);
		}
		if (b != 9)
			return (0);
		b = 0;
		a++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	argv = argv + 1;
	if (argc != 10 || check_lines(argv) == 0)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	if (ft_res_sudoku(argv, 0, 0, '1') == 0)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	ft_display(argv);
	return (0);
}
