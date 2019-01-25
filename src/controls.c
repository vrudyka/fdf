/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 13:41:34 by vrudyka           #+#    #+#             */
/*   Updated: 2019/01/24 13:41:35 by vrudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				X(void *param) //REDO
{
	(void)param;
	exit(0);
	return (0);
}

int				terminate(int error)
{
	if (error == 70)
		ft_putendl("No such file");
	else if (error == 73)
		ft_putendl("Invalid map");
	else if (error == 85)
		ft_putendl("usage: ./fdf [file_name.fdf]");
	exit(0);
	return (0);
}

int				key_down(int key, t_var *var)
{
	if (key == ESC)
		exit(0);
	else if (key == ARROW_UP)
		rotate(var, 'x');
	else if (key == ARROW_L)
		rotate(var, 'y');
	else if (key == ARROW_R)
		rotate(var, 'z');
	else if (key == MAIN_KEY_R || key + MAIN_KEY_B)
		color_assign(var, key);
	return (0);
}
