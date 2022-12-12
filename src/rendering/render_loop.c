/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   render_loop.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mevan-de <mevan-de@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/09 12:02:12 by mevan-de      #+#    #+#                 */
/*   Updated: 2022/12/12 14:02:20 by mevan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_utils.h"
#include "cub3d_render.h"
#include "cub3d_structs.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>


void	render(t_cub3d *cub3d_data)
{
	
}

void	update_loop(void *data)
{
	t_cub3d	*cub3d_data;

	cub3d_data = data;
	//update_values()
	render(cub3d_data);
}
