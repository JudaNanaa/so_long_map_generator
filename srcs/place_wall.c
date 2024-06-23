/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:20:43 by madamou           #+#    #+#             */
/*   Updated: 2024/06/23 17:38:31 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_generator.h"

void	ft_place_wall(char **map)
{
	int	random;
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == '0')
			{
				random = rand() % 3;
				if (random == 0)
					map[i][j] = '1';
			}
			j++;
		}
		i++;
	}
}

char	**ft_copy_map(char **map, int x, int y)
{
	int		i;
	char	**map_cpy;

	i = -1;
	map_cpy = malloc(sizeof(char *) * (y + 1));
	if (!map_cpy)
		return (ft_printf("Error when check if playable\n"), NULL);
	while (++i < y)
	{
		map_cpy[i] = malloc(sizeof(char) * (x + 1));
		if (!map_cpy[i])
		{
			ft_free_split(map_cpy);
			return (ft_printf("Error when check if playable\n"), NULL);
		}
		map_cpy[i][0] = '\0';
		ft_strcat(map_cpy[i], map[i]);
	}
	map_cpy[y] = NULL;
	return (map_cpy);
}

char	**ft_place_sprite(char **map, int x, int y)
{
	char	**map_cpy;
	int		result;

	while (1)
	{
		map_cpy = NULL;
		map_cpy = ft_copy_map(map, x, y);
		if (!map_cpy)
			return (ft_free_split(map), NULL);
		ft_place_wall(map_cpy);
		result = ft_check_if_playable(map_cpy, x, y);
		if (result == 0)
			return (ft_free_split(map), map_cpy);
		if (result == 2)
			return (ft_free_split(map_cpy), ft_free_split(map), NULL);
		ft_free_split(map_cpy);
	}
	return (NULL);
}
