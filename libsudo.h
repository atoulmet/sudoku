/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsudo.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoulmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 19:03:17 by atoulmet          #+#    #+#             */
/*   Updated: 2016/09/11 22:51:48 by atoulmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSUDO_H
# define LIBSUDO_H

int		ft_checks(char **tab, int x, int y, char value);
int		ft_res_sudoku(char **tab, int x, int y, char k);
void	ft_display(char **tab);

#endif
