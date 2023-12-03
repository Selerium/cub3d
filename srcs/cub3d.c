/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:10:47 by jadithya          #+#    #+#             */
/*   Updated: 2023/12/03 17:28:55 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include <fcntl.h>
#include <unistd.h>

bool	basic_parse(char *filepath, t_cub3d *cube)
{
	int		fd;
	char	*str;
	char	*buffer;

	if (access(filepath, F_OK | R_OK) != 0)
		return (printf("Error: file permissions\n"));
	fd = open(filepath, O_RDONLY);
	str = get_next_line(fd);
	buffer = get_next_line(fd);
	while (buffer)
	{
		str = ft_strjoin(str, buffer);
		free (buffer);
		buffer = get_next_line(fd);
	}
	close(fd);
	cube->map.points = ft_split(str, '\n');
	return (true);
}

int	main(int argc, char **argv)
{
	t_cub3d	cube;
	int		i;

	if (argc != 2 && argv[0])
	{
		printf("Error: arguments\n");
		return (1);
	}
	if (!basic_parse(argv[1], &cube))
	{
		printf("Error: parsing file\n");
		return (1);
	}
	i = 0;
	while (cube.map.points[i])
		printf("%s\n", cube.map.points[i++]);
	return (0);
}
