/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_playable.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:43:27 by madamou           #+#    #+#             */
/*   Updated: 2024/06/23 17:38:11 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_generator.h"

int	ft_change_to_p(char **map, int x, int y)
{
	int	cpt;

	cpt = 0;
	if (map[y][x - 1] == '0' || map[y][x - 1] == 'C' || map[y][x - 1] == 'E')
	{
		map[y][x - 1] = 'P';
		cpt++;
	}
	if (map[y][x + 1] == '0' || map[y][x + 1] == 'C' || map[y][x + 1] == 'E')
	{
		map[y][x + 1] = 'P';
		cpt++;
	}
	if (map[y - 1][x] == '0' || map[y - 1][x] == 'C' || map[y - 1][x] == 'E')
	{
		map[y - 1][x] = 'P';
		cpt++;
	}
	if (map[y + 1][x] == '0' || map[y + 1][x] == 'C' || map[y + 1][x] == 'E')
	{
		map[y + 1][x] = 'P';
		cpt++;
	}
	return (cpt);
}

char	**ft_blob_the_map(char **map)
{
	int	x;
	int	y;
	int	cpt;

	while (1)
	{
		cpt = 0;
		y = 0;
		while (map[y])
		{
			x = 0;
			while (map[y][x])
			{
				if (map[y][x] == 'P')
					cpt += ft_change_to_p(map, x, y);
				x++;
			}
			y++;
		}
		if (cpt == 0)
			return (map);
	}
	return (NULL);
}

int	ft_check_if_all_good(char **map)
{
	int	x;
	int	y;

	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == 'C' || map[y][x] == 'E')
				return (-1);
			x++;
		}
		y++;
	}
	return (0);
}

int	ft_check_if_playable(char **map, int x, int y)
{
	int		i;
	char	**map_cpy;

	i = 0;
	map_cpy = malloc(sizeof(char *) * (y + 1));
	if (!map_cpy)
		return (ft_printf("Error when check if playable\n"), -2);
	while (i < y)
	{
		map_cpy[i] = malloc(sizeof(char) * (x + 1));
		if (!map_cpy[i])
		{
			ft_free_split(map_cpy);
			return (ft_printf("Error when check if playable\n"), -2);
		}
		map_cpy[i][0] = '\0';
		ft_strcat(map_cpy[i], map[i]);
		i++;
	}
	map_cpy[y] = NULL;
	ft_blob_the_map(map_cpy);
	if (ft_check_if_all_good(map_cpy) == -1)
		return (ft_free_split(map_cpy), -1);
	return (ft_free_split(map_cpy), 0);
}
