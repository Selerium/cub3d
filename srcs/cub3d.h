/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:10:59 by jadithya          #+#    #+#             */
/*   Updated: 2023/11/11 15:55:45 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <stdbool.h>
# include <sys/fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"

// # ifdef OSX
// #  include "mlx/mlx.h"
// #  define ESC 0x35
// #  define Q 0x0C
// #  define W 0x0D
// #  define E 0x0E
// #  define R 0x0F
// #  define A 0x00
// #  define S 0x01
// #  define D 0x02
// #  define F 0x03
// #  define Z 0x06
// #  define X 0x07
// #  define C 0x08
// #  define V 0x09
// #  define UP 0x7E
// #  define DOWN 0x7D
// #  define LEFT 0x7B
// #  define RIGHT 0x7C
// # elif LINUX
# include "../mlx-linux/mlx.h"
# define ESC 65307
# define Q 113
# define W 119
# define E 101
# define R 114
# define A 97
# define S 115
# define D 100
# define F 102
# define Z 122
# define X 120
# define C 99
# define V 118
# define UP 65362
# define DOWN 65364
# define LEFT 65361
# define RIGHT 65363
// # endif

typedef struct map {
	char	**points;
}		t_map;

typedef struct cub3d {
	t_map	map;
}		t_cub3d;

#endif