/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:43:39 by madamou           #+#    #+#             */
/*   Updated: 2024/06/23 17:50:00 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_generator.h"
#include <fcntl.h>

char	**ft_malloc_line(char **map, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		map[i] = malloc(sizeof(char) * (x + 1));
		if (!map[i])
			return (ft_free_split(map), NULL);
		j = 0;
		if (i == 0 || i == y - 1)
			while (j < x)
				map[i][j++] = '1';
		else
		{
			map[i][0] = '1';
			j = 1;
			while (j < x - 1)
				map[i][j++] = '0';
			map[i][j++] = '1';
		}
		map[i++][j] = '\0';
	}
	return (map[y] = NULL, map);
}

void	ft_write_on_file(char *outfile, char **map)
{
	int	i;
	int	fd;

	fd = open(outfile, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return ;
	i = 0;
	while (map[i])
	{
		ft_putstr_fd(map[i], fd);
		ft_putstr_fd("\n", fd);
		i++;
	}
	close(fd);
}

char	**ft_create_map(char **number, char *coins, char *outfile)
{
	int		nb_coins;
	int		x;
	int		y;
	char	**map;

	nb_coins = ft_atoi(coins);
	x = ft_atoi(number[0]);
	y = ft_atoi(number[1]);
	map = malloc(sizeof(char *) * (y + 1));
	if (!map)
		return (NULL);
	map = ft_malloc_line(map, x, y);
	if (!map)
		return (NULL);
	srand(time(NULL));
	(ft_place_player(map, x, y), ft_place_exit(map, x, y));
	ft_place_collectibles(map, x, y, nb_coins);
	map = ft_place_sprite(map, x, y);
	if (!map)
		return (NULL);
	ft_write_on_file(outfile, map);
	ft_free_split(map);
	return (map);
}
